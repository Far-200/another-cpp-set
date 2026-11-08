#include <iostream>
#include <vector>


class Solution {
public:
    multiset<long long> leftPart, rightPart;
    long long leftSum = 0, rightSum = 0;

    void balance() {
        while (leftPart.size() > rightPart.size() + 1) {
            auto it = prev(leftPart.end());
            long long val = *it;

            leftPart.erase(it);
            leftSum -= val;

            rightPart.insert(val);
            rightSum += val;
        }

        while (leftPart.size() < rightPart.size()) {
            auto it = rightPart.begin();
            long long val = *it;

            rightPart.erase(it);
            rightSum -= val;

            leftPart.insert(val);
            leftSum += val;
        }
    }

    void add(long long val) {
        if (leftPart.empty() || val <= *prev(leftPart.end())) {
            leftPart.insert(val);
            leftSum += val;
        } else {
            rightPart.insert(val);
            rightSum += val;
        }

        balance();
    }

    void remove(long long val) {
        auto it = leftPart.find(val);

        if (it != leftPart.end()) {
            leftPart.erase(it);
            leftSum -= val;
        } else {
            it = rightPart.find(val);
            rightPart.erase(it);
            rightSum -= val;
        }

        balance();
    }

    long long getCost() {
        long long median = *prev(leftPart.end());

        long long leftCost =
            median * (long long)leftPart.size() - leftSum;

        long long rightCost =
            rightSum - median * (long long)rightPart.size();

        return leftCost + rightCost;
    }

    long long minOperations(vector<int>& nums, int x, int k) {
        int n = nums.size();

        // cost[i] = cost of making nums[i ... i+x-1] equal
        vector<long long> cost(n - x + 1);

        for (int i = 0; i < x; i++) {
            add(nums[i]);
        }

        cost[0] = getCost();

        for (int i = x; i < n; i++) {
            remove(nums[i - x]);
            add(nums[i]);

            cost[i - x + 1] = getCost();
        }

        const long long INF = 4e18;

        vector<long long> prev(n + 1, 0);
        vector<long long> curr(n + 1, INF);

        for (int chosen = 1; chosen <= k; chosen++) {
            fill(curr.begin(), curr.end(), INF);

            for (int i = 1; i <= n; i++) {

                // Don't use a window ending here
                curr[i] = curr[i - 1];

                // Use nums[i-x ... i-1]
                if (i >= x && prev[i - x] != INF) {
                    curr[i] = min(
                        curr[i],
                        prev[i - x] + cost[i - x]
                    );
                }
            }

            prev.swap(curr);
        }

        return prev[n];
    }
};
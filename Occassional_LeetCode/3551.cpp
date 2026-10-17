#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;
class Solution {
    int digitSum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

public:
    int minSwaps(vector<int>& nums) {
        int size = nums.size();
        vector<pair<int, int>> data(size);
        for (int i = 0; i < size; i++) {
            data[i] = {digitSum(nums[i]), nums[i]};
        }

        vector<pair<int, int>> sorted_data = data;
        sort(sorted_data.begin(), sorted_data.end());

        unordered_map<int, int> target_pos;
        for (int i = 0; i < size; i++) {
            target_pos[sorted_data[i].second] = i;
        }

        vector<bool> visited(size, false);
        int swaps = 0;

        for (int i = 0; i < size; i++) {
            if (visited[i] || target_pos[nums[i]] == i) {
                continue;
            }

            int cycle_size = 0;
            int j = i;
            while (!visited[j]) {
                visited[j] = true;
                j = target_pos[nums[j]];
                cycle_size++;
            }
            if (cycle_size > 1) {
                swaps += cycle_size - 1;
            }
        }

        return swaps;
    }
};
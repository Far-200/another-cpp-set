#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:

    bool isRotation(vector<int>& nums, vector<int>& target, int start, int k) {

        vector<int> lps(k, 0);

        for (int i = 1, len = 0; i < k; ) {
            if (target[start + i] == target[start + len]) {
                lps[i++] = ++len;
            }
            else if (len > 0) {
                len = lps[len - 1];
            }
            else {
                lps[i++] = 0;
            }
        }

        int j = 0;

        for (int i = 0; i < 2 * k - 1; i++) {

            int value = nums[start + (i % k)];

            while (j > 0 && value != target[start + j]) {
                j = lps[j - 1];
            }

            if (value == target[start + j]) {
                j++;
            }

            if (j == k) {
                return true;
            }
        }

        return false;
    }

    bool works(vector<int>& nums, vector<int>& sorted, int k) {

        int n = nums.size();

        for (int start = 0; start < n; start += k) {

            if (!isRotation(nums, sorted, start, k)) {
                return false;
            }
        }

        return true;
    }

    int sortableIntegers(vector<int>& nums) {

        int n = nums.size();

        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());

        int answer = 0;

        for (int k = 1; k <= n; k++) {

            if (n % k != 0) {
                continue;
            }

            if (works(nums, sorted, k)) {
                answer += k;
            }
        }

        return answer;
    }
};
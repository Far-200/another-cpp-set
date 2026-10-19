#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> answer;
        int smaller = 0;
        int equal = 0;
        //counting
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < target){
                smaller++;
            }
            if(nums[i] == target){
                equal++;
            }
        }

        for (int i = smaller; i < smaller + equal; i++) {
           answer.push_back(i);
        }
        return answer;
    }
};
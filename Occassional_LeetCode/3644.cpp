#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int k = 0;
        bool found = false;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != i){
                if(!found){
                    k = nums[i];
                    found = true;
                }

                else{
                    k = k & nums[i];
                }
            }
        }
        return k;
    }
};
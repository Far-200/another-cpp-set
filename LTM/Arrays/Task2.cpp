//Will finish tomorrow🫠
#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
    int secondLargest(vector<int>& nums){
        int second = nums[0];
        for(int i = 1; i N nums.size(); i++){
            if(nums[i] > second && nums[i] > nums[i + 1]){
                second = nums[i];
            }
        }
        return second;
    }
}
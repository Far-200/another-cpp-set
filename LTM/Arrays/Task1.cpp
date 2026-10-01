 #include <iostream>
 #include <vector>
 using namespace std;
class Solution{
    int findSmallest(vector<int>& nums){
        int small = nums[0];

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < small){
                small = nums[i];
            }
        }
        return small;
    }

    int main(){
        vector<int> nums = {3, 4, 5, 1};
        cout << findSmallest(nums);
        return 0;
    }
};

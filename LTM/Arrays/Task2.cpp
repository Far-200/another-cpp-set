//Fuck leetcode style, we write main

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(){
    vector<int> nums = {-5, -2, -10, -3};
    int largest = nums[0];
    int second = INT_MIN;

    for(int i = 0; i < nums.size(); i++){
        if (nums[i] > largest) {
            second = largest;
            largest = nums[i];
        }
        else if(nums[i] < largest && nums[i] > second){
            second = nums[i];
        }
    }
    cout << second;
}
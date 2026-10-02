#include <iostream>
#include <vector>

using namespace std;

int main(){
    //moving all 0's to the end it seems

    vector<int> nums = {0, 1, 0, 3, 12};
    int pos = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != 0){
            nums[pos] = nums[i];
            pos++;
        }
    }
    for(int i = pos; i < nums.size(); i++){
        nums[i] = 0;
    }

    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    return 0;
}

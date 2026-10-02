#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1, 1, 2, 2, 2, 3, 4, 4};
    int pos = 1;
    for(int i = 1; i < nums.size(); i++){
        if(nums[i] != nums[pos - 1]){
            nums[pos] = nums[i];
            pos++;
        }
    }

    nums.resize(pos);

    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    return 0;
}
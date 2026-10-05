#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;
    int pos = 0;
    int count = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != val){
            nums[pos] = nums[i];
            pos++;
        }
        //count++;
    }
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
   cout << pos;
    return 0;
}
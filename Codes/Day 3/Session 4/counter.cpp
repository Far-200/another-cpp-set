#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count = 0;

    for(int i = 1; i <= n; i++){
        if(i % 3 == 0){
            count++;
        }
    }
    cout << "Total numbers divisible by 3 up to" << n << " is: " << count << endl;
    return 0;
}
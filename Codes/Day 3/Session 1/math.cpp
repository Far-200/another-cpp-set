#include <iostream>
using namespace std;
int main(){
    int n; 

    cout << "Enter a number: ";
    cin >> n;
    //Normal for loop
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            cout << i << " is even" << endl;
        }
        else{
            cout << i << " is odd" << endl;
        }
    }
    return 0;
}
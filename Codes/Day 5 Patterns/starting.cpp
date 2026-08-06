#include <iostream>
using namespace std;
int main(){
/*    int n;
    cout << "Enter the value of n: ";
    cin >> n;
 Square Pattern
    for(int i = 0; i < n; i++){
        char ch = 'A';
        for(int j = 0; j < n; j++){
            cout << ch;
            ch = ch + 1;
        }
        cout << endl;
    }*/

    int n = 3;
    int num = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << num << " ";
            num++;
        }

        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n;

    do{
        cout << "Enter a number: ";
        cin >> n;
        cout << "You entered: " << n << endl;
    }while(n > 0);
    if(n == 0){
        cout << "Program Stopped." << endl;
    }
    return 0;
}
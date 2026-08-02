#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    int i = 0;
    while(i <= n){
        sum += i;
        i++;
    }
    cout << "The sum of numbers from 0 to " << n << " is: " << sum << endl;
    return 0;
}
#include <iostream>
using namespace std;
//Palindrome it seemeth. And no built in functions
/*
Reverse digits
Sum of digits (extract digits)
Palindrome (if reverse = og)
*/

int palindrome(int n){
    int og = n;
    int reverse = 0;
    int remainder = 0;
    int sum = 0;
    bool isNegative = false;
    if(n < 0){
        isNegative = true;
        //cout << "This code is ass. Session terminated." << endl;
        n = -n;
    }
    while(n > 0){
        int digit = n;
        remainder = n % 10;
        sum += remainder ;
        reverse = 10 * reverse + remainder;
        n /= 10;
    }
    if(isNegative == true){
            reverse = -reverse;
    }
    if(!isNegative && reverse == og){
        cout << "Not Sus. Palindrome: Yes." << endl;
        cout << "Reverse: " << reverse << endl;
    }
    else{
        cout << "Sus. Palindrome: No" << endl;
        cout << "Reverse: " << reverse << endl;
    }
    cout << "Sum: "; 
    return sum;
}

int main(){
    cout << "Suspicious code for a suspicious number: " << endl;
    int n;
    cin >> n;
    
    cout << palindrome(n);
    return 0;
}
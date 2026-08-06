// Problem 2 — Hostel Wi-Fi PIN Inspector

#include <iostream>

using namespace std;
int main(){
    int code;
    cout << "Enter access code: ";
    cin >> code;
    if(code < 0){
        cout << "Invalid Code.";
    }

    //Now💔
    //Extract the number of digits in the code
    int numDigits = 0;
    int tempCode = code;
    while(tempCode != 0){
        tempCode /= 10;
        numDigits++;
    }

    //Now... to calculate the sum of even digits in the code💔
    int sumEvenDigits = 0;
    tempCode = code;
    while(tempCode != 0){
        int digit = tempCode % 10;
        if(digit % 2 == 0){
            sumEvenDigits += digit;
        }
        tempCode /= 10;
    }
    //Now...odd digit sum
    int sumOddDigits = 0;
    tempCode = code;
    while(tempCode != 0){
        int digit = tempCode % 10;
        if(digit % 2 != 0){
            sumOddDigits += digit;
        }
        tempCode /= 10;
    }
    
    //Now, number of zeroes...
    int numZeroes = 0;
    tempCode = code;
    while(tempCode != 0){
        int digit = tempCode % 10;
        if(digit == 0){
            numZeroes++;
        }
        tempCode /= 10;
    }
    //If the code is '0', then we count as 1 zero and print in the output.
    if(code == 0){
        numZeroes = 1;
    }

    //Reverse the code
    int reversedCode = 0;
    tempCode = code;
    while(tempCode != 0){
        int digit = tempCode % 10;
        reversedCode = reversedCode * 10 + digit;
        tempCode /= 10;
    }

    //Output the results
    cout << "\nDigits: " << numDigits;
    cout << "\nEven digit sum: " << sumEvenDigits;
    cout << "\nOdd digit sum: " << sumOddDigits;
    cout << "\nZerow digits: " << numZeroes;
    cout << "\nReversed code: " << reversedCode;
    cout << "\n Signal: ";
    if(sumEvenDigits > sumOddDigits){
        cout << "EVEN SIGNAL.";
    } 
    else if(sumOddDigits > sumEvenDigits){
        cout << "ODD SIGNAL.";
    }
    else{
        cout << "BALANCED SIGNAL.";
    }
    return 0;
}

// Report 💔💔
/*
Well.................................................................
Code explains everything, but I will explain it in a simple way.
1. First, we take the input code from the user.
2. Then we check if the code is negative, if yes, we print "Invalid Code."
3. Then we calculate the number of digits in the code.
4. Then we calculate the sum of even digits in the code.
5. Then we calculate the sum of odd digits in the code.
6. Then we calculate the number of zeroes in the code.
7. Then we reverse the code.
8. Finally, we print the results and check which sum is greater, even or odd, and print the corresponding signal.

What am I doing with my life💔?
*/
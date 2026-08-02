#include <iostream>
using namespace std;

bool isPrime(int number){
    if(number < 2){
        return false;
    }

    for(int divisor = 2; divisor * divisor <= number; divisor++){
        if(number % divisor == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int n;

    cout << "Enter an even number greater than 2: ";
    cin >> n;

    if(n <= 2 || n % 2 != 0){
        cout << "Please enter a valid even number greater than 2." << endl;
        return 1;
    }

    bool pairFound = false;

    for(int firstPrime = 2; firstPrime <= n / 2; firstPrime++){
        int secondPrime = n - firstPrime;

        if(isPrime(firstPrime) && isPrime(secondPrime)){
            cout << n << " = "
                 << firstPrime << " + "
                 << secondPrime << endl;

            pairFound = true;
            break;
        }
    }

    if(!pairFound){
        cout << "No prime pair was found." << endl;
    }

    return 0;
}
/*
Problem 3 — Username Reconstruction Protocol

Marks: 20

A college portal receives a messy username phrase containing letters, digits, spaces, and special characters.

You must construct a cleaned username according to these rules:

Keep letters and digits only.
Convert every letter to lowercase.
Remove spaces and special characters.
Count:
vowels
consonants
digits
removed characters
Determine whether the cleaned username is a palindrome.

A palindrome reads the same from left to right and right to left.

Example 1

Input:

Enter username phrase: Madam 123!

Cleaned username:

madam123

Output:

Cleaned username: madam123
Vowels: 2
Consonants: 3
Digits: 3
Removed characters: 2
Palindrome: NO
*/

#include <iostream>
using namespace std;
int main() {
    int vowels = 0, consonants = 0, digits = 0, removedChars = 0;
    string input, cleanedUsername = "";

    cout << "Enter username phrase: ";
    getline(cin, input);

    //Wll clean up a bit?💔
    for (char c : input) {
        if (isalpha(c)) {
            cleanedUsername += tolower(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(c)) {
            cleanedUsername += c;
            digits++;
        } else {
            removedChars++;
        }
    }
    removedChars = input.length() - cleanedUsername.length();
    removedChars = removedChars < 0 ? 0 : removedChars;
    removedChars = removedChars > 0 ? removedChars : 0;
    cout << "Cleaned username: " << cleanedUsername << endl;
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "Removed characters: " << removedChars << endl;
    return 0;
}
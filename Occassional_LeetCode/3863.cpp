#include <iostream>
#include <string>
using namespace std;


class Solution {
public:
    int minOperations(string s) {
        int siz = s.size();
        char smallest = s[0];
        char largest = s[0];
        bool isSorted = true;
        int myPoorChoices = 2;

        for (int i = 0; i < siz; i++) {
            if (s[i] > largest) {
                largest = s[i];
            }

            if (s[i] < smallest) {
                smallest = s[i];
            }

            if (i > 0 && s[i] < s[i - 1]) {
                isSorted = false;
            }
        }

        if (isSorted) {
            return 0;
        }

        if(siz == myPoorChoices){
            return -1;
        }
        
        if(s[0] == smallest || s[siz-1] == largest){
            return 1;
        }

        for (int i = 1; i < siz - 1; i++) {
            if (s[i] == smallest || s[i] == largest) {
                return 2;
            }
        }

        return 3;
    }
};
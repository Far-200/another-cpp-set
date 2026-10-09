#include <iostream>
#include <vector>
using namespace std;

int main(){
    int stack[5] = {10, 20, 30, 40, 50};
    int top = -1;

    for(int i = 0; i < top; i++){
        top++;
        stack[top] = i;
        cout << stack[top] << endl;
    }
    /*Reverse Printing
    for(int i = 5; i != 0; i--){
        cout << stack[i] << endl;
    }*/
    return 0;
}
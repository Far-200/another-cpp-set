#include <iostream>
using namespace std;

int main() {
    int stack[5];
    int top = -1;

    // Push 10
    top++;
    stack[top] = 10;
    // Push 20
    top++;
    stack[top] = 20;
    // Push 30
    top++;
    stack[top] = 30;
    // Print the current top element
    cout << "Yeah, top element: " << stack[top] << endl;

    // Print the stack from top to bottom
    for(int i = top; i >= 0; i--){
        cout << stack[i] << endl;
    }

    return 0;
}
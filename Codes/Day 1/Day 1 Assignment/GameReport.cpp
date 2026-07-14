#include <iostream>
#include <string>

using namespace std;

int main(){
    string gameName;
    int hoursPlayed;
    double price;
    char performanceGrade;
    bool gameCompleted;

    cout << "Enter the name of the game:" << endl;
    cin >> gameName;

    cout << "Enter the number of hours played:" << endl;
    cin >> hoursPlayed;

    cout << "Enter the price of the game:" << endl;
    cin >> price;

    cout << "Enter the performance grade (A, B, C, D, F):" << endl;
    cin >> performanceGrade;

    cout << "Have you completed the game? (1 for Yes, 0 for No):" << endl;
    cin >> gameCompleted;

    cout << "----Game Report----" << endl;
    cout << "Game Name: " << gameName << endl;
    cout << "Hours Played: " << hoursPlayed << endl;
    cout << "Price: $" << price << endl;
    cout << "Performance Grade: " << performanceGrade << endl;
    cout << "Game Completed: " << (gameCompleted ? "Yes" : "No") << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int sessions;

    cout << "Enter number of sessions: ";
    cin >> sessions;

    if (sessions <= 0) {
        cout << "Invalid number of sessions." << endl;
        return 0; //Fix program termination
    }

    int totalMinutes = 0;
    int productiveSessions = 0;
    int longestSession = 0;

    for (int i = 1; i <= sessions; i++) { // Include final loop iteration
        int minutes;

        cout << "Enter duration for session " << i << ": ";
        cin >> minutes;

        if (minutes < 0) {
            cout << "Invalid duration. Try again." << endl;
            i--; //Handle invalid iteration correction
            continue;
        }

        totalMinutes += minutes; //Accumulate total minutes

        if (minutes >= 45) {
            productiveSessions++;
        }

        if (minutes > longestSession) { //Correct maximum calculation logic
            longestSession = minutes;
        }
    }

    double average = static_cast<double>(totalMinutes) / sessions; // Enable decimal math calculations

    cout << "\nTotal minutes: " << totalMinutes << endl;
    cout << "Productive sessions: " << productiveSessions << endl;
    cout << "Longest session: " << longestSession << endl;
    cout << "Average duration: " << average << endl;

    cout << "Status: ";

    if (average >= 60) {
        cout << "LOCKED IN" << endl;
    }
    else if (average >= 30) {
        cout << "BUILDING MOMENTUM" << endl;
    }
    else {
        cout << "SIDE QUEST ARC" << endl;
    }

    return 0;
}


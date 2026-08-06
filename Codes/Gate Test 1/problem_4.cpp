#include <iostream>

using namespace std;

int main() {
    int confidence;
    cout << "Enter starting confidence: ";
    cin >> confidence;

    int plannedAttempts;
    cout << "Enter planned attempts: ";
    cin >> plannedAttempts;

    int processedAttempts = 0;
    int correctCount = 0;
    int wrongCount = 0;
    int skippedCount = 0;
    int streakCount = 0;
    int bonusCount = 0;

    if (confidence <= 0) {
        confidence = 0;
    } else if (confidence >= 100) {
        confidence = 100;
    }

    if (confidence > 0 && confidence < 100) {
        for (int i = 0; i < plannedAttempts; i++) {
            char result;
            cout << "Attempt " << i + 1 << " result: ";
            cin >> result;

            if (result == 'c') result = 'C';
            if (result == 'w') result = 'W';
            if (result == 's') result = 'S';

           
            if (result != 'C' && result != 'W' && result != 'S') {
                i--;
                continue;
            }

            processedAttempts++;
            
            if (result == 'C') {
                correctCount++;
                confidence += 10;
                streakCount++;

                if (streakCount == 3) {
                    confidence += 5;
                    bonusCount++;
                    streakCount = 0;
                }
            } else if (result == 'W') {
                wrongCount++;
                confidence -= 6;
                streakCount = 0; 
            } else if (result == 'S') {
                skippedCount++;
                confidence -= 2;
                streakCount = 0; 
            }

            
            if (confidence >= 100) {
                confidence = 100;
                break; 
            }
            if (confidence <= 0) {
                confidence = 0;
                break;
            }
        }
    }

    cout << "\nProcessed attempts: " << processedAttempts << endl;
    cout << "Correct: " << correctCount << endl;
    cout << "Wrong: " << wrongCount << endl;
    cout << "Skipped: " << skippedCount << endl;
    cout << "Streak bonuses: " << bonusCount << endl;
    cout << "Final confidence: " << confidence << endl;

    // Status evaluation block
    cout << "Status: ";
    if (confidence == 0) {
        cout << "BURNOUT" << endl;
    } else if (confidence >= 1 && confidence <= 39) {
        cout << "NEEDS RECOVERY" << endl;
    } else if (confidence >= 40 && confidence <= 69) {
        cout << "KEEP PRACTICING" << endl;
    } else if (confidence >= 70 && confidence <= 99) {
        cout << "INTERVIEW READY" << endl;
    } else if (confidence == 100) {
        cout << "PLACEMENT LEGEND" << endl;
    }

    return 0;
}

/*
How the streak worksA tracking counter (streakCount) increments by 1 every time a 'C' or 'c' input is verified.If streakCount hits 3, the code grants +5 confidence points, logs a bonusCount, and resets streakCount back to 0.If any 'W' or 'S' character is entered instead, the counter instantly snaps back to 0 to prevent building up an irregular streak.How invalid input is retriedThe program runs an internal conditional statement check (result != 'C' && result != 'W' && result != 'S').If an invalid character trips this condition, the tracking loop counter i is decremented (i--).A continue statement executes, passing control right back up to the start of the loop iteration to prompt for the current attempt index again without modifying any process counters.How early stopping worksExplicit check-bounds validation logic runs right after the logic structures calculate confidence updates.If the running score registers at or beyond 100, it clamps to 100 and a break statement instantly halts the execution sequence of the loop.If the running score registers at or below 0, it clamps to 0 and invokes a mirroring break operation to abort processing additional actions immediately.

*/
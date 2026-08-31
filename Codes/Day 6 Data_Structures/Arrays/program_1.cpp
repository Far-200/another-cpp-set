// Day 6 - Arrays - Worked examples
// Read NOTES.md first. Compile:  g++ program_1.cpp -o program_1 && ./program_1

#include <iostream>
using namespace std;

int main() {
    // ---- 1. Create and traverse ----------------------------------------
    int a[] = {3, 1, 4, 1, 5, 9, 2, 6};
    int n = sizeof(a) / sizeof(a[0]);   // = 8

    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\nSize: " << n << "\n\n";

    // ---- 2. Sum and average ------------------------------------------------
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    cout << "Sum     = " << sum << "\n";
    cout << "Average = " << (double)sum / n << "\n\n";

    // ---- 3. Max and min (start from a[0], NOT from 0) --------------------
    int mx = a[0], mn = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > mx) mx = a[i];
        if (a[i] < mn) mn = a[i];
    }
    cout << "Max = " << mx << ", Min = " << mn << "\n\n";

    // ---- 4. Linear search: is 5 present? where? -------------------------
    int target = 5;
    int foundAt = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == target) {
            foundAt = i;
            break;                 // stop at first match
        }
    }
    if (foundAt != -1) cout << target << " found at index " << foundAt << "\n\n";
    else               cout << target << " not found\n\n";

    // ---- 5. Reverse in place --------------------------------------------
    // swap the pair (i, n-1-i), walking i from the outside inwards
    for (int i = 0; i < n / 2; i++) {
        int tmp      = a[i];
        a[i]         = a[n - 1 - i];
        a[n - 1 - i] = tmp;
    }
    cout << "Reversed: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\n";

    return 0;
}

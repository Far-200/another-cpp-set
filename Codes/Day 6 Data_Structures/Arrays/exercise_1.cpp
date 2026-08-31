// Day 6 - Arrays - Exercise 1
// Compile:  g++ exercise_1.cpp -o exercise_1 && ./exercise_1
//
// ---------------------------------------------------------------------
// WORD PROBLEM
//
// A class of 8 students just got their test marks back (out of 100).
// The marks are already stored in the array below.
//
// The teacher wants three things printed:
//
//   1. The class average.
//   2. How many students PASSED  (a pass is 40 marks or more).
//   3. The highest mark in the class.
//
// Print them like this (one per line):
//
//   Average: 63.75
//   Passed: 6
//   Topper: 91
//
// ---------------------------------------------------------------------
// Your job: write the logic inside main(). One pass through the array
// is enough for all three. Track a running sum, a pass counter, and a
// running highest (start it from marks[0], not 0).
// ---------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int marks[] = {55, 91, 38, 72, 40, 29, 84, 61};
    int n = sizeof(marks) / sizeof(marks[0]);   // = 8

    // TODO: your logic here
    //  - int   sum      = 0;
    //  - int   passed   = 0;
    //  - int   topper   = marks[0];
    //  - loop i from 0 to n-1, update the three
    //  - then print the three lines


    return 0;
}

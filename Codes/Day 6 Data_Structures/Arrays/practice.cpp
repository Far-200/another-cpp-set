// Day 6 - Arrays - PRACTICE
// Do these IN ORDER. Write your own solution, compile, test, THEN ask me to check.
// Compile:  g++ practice.cpp -o practice && ./practice
//
// Work on ONE problem at a time in main(). Comment out the others.

#include <iostream>
using namespace std;

int main() {

    // ================================================================
    // P1. INPUT + PRINT
    // Read n, then read n integers into an array, then print them
    // on one line separated by spaces.
    // ================================================================

    // ================================================================
    // P2. SUM OF EVEN NUMBERS
    // Given an array, print the sum of only its even elements.
    // Test: {1,2,3,4,5,6} -> 12
    // ================================================================

    // ================================================================
    // P3. COUNT OCCURRENCES
    // Read the array and a value x. Print how many times x appears.
    // Test: {2,3,2,2,5}, x=2 -> 3
    // ================================================================

    // ================================================================
    // P4. SECOND LARGEST (one pass, no sorting)
    // Print the second largest DISTINCT value.
    // Test: {10, 5, 10, 8, 2} -> 8
    // Think: what do you do when a[i] is bigger than largest?
    //        what about when it's between second and largest?
    // ================================================================

    // ================================================================
    // P5. REVERSE INTO A NEW ARRAY
    // Fill array b with array a reversed. Don't modify a.
    // ================================================================

    // ================================================================
    // P6. LINEAR SEARCH -> return index or -1
    // Write it as a function:  int search(int arr[], int n, int x)
    // Call it from main and print the result.
    // ================================================================

    // ================================================================
    // P7. CHECK IF SORTED (ascending)
    // Print "YES" if a[0] <= a[1] <= ... <= a[n-1], else "NO".
    // Hint: you only need to compare each pair (i, i+1).
    // ================================================================

    // ================================================================
    // P8. LEFT ROTATE BY 1
    // {1,2,3,4,5} becomes {2,3,4,5,1}. Do it in place.
    // Hint: save a[0], shift everyone left, put saved value at the end.
    // ================================================================

    // ================================================================
    // P9. MOVE ALL ZEROS TO THE END (keep order of non-zeros)
    // {0,1,0,3,12} -> {1,3,12,0,0}
    // Hint: keep a write-index j. For each element, if non-zero,
    //       put it at a[j] and j++. Then fill the rest with 0.
    // ================================================================

    // ================================================================
    // P10. MAX SUBARRAY SUM (Kadane's algorithm) -- the classic
    // Find the largest sum of any contiguous block.
    // {-2,1,-3,4,-1,2,1,-5,4} -> 6   (the block {4,-1,2,1})
    // Hint: walk through keeping curr = max(a[i], curr + a[i]),
    //       and best = max(best, curr).
    // ================================================================

    return 0;
}

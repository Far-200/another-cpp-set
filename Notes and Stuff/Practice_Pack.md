# C++ From Scratch — Practice Pack

*Companion to the "C++ From Scratch: College-Style Foundations for DSA" slide deck. Work through these after each day of the 7-day plan — hints are given for most questions; a handful come with full worked solutions to check your approach against.*

---

## Beginner Practice Ladder

### Level 1 — Syntax, Input & Output

1. **Print "Hello, C++".**
   *Hint: cout << "Hello, C++";*

2. **Read two integers and print their sum.** ✅ *Solved below*

3. **Read length and breadth and print the rectangle area.**
   *Hint: area = length * breadth; watch for integer vs double inputs.*

4. **Convert Celsius to Fahrenheit.**
   *Hint: F = C * 9.0 / 5.0 + 32; use a double, not int, or you'll silently truncate.*

5. **Swap two numbers using a temporary variable.**
   *Hint: temp = a; a = b; b = temp;*

6. **Swap two numbers using std::swap.**
   *Hint: #include <algorithm> or <utility>, then swap(a, b);*

**Solution — Q2:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << a + b;
    return 0;
}
```
Input: `3 4`  →  Output: `7`

---

### Level 2 — Conditions

1. **Check whether a number is even or odd.**
   *Hint: n % 2 == 0 means even.*

2. **Check whether a number is positive, negative, or zero.**
   *Hint: three-way if / else if / else.*

3. **Find the largest of two numbers.**
   *Hint: one if / else is enough.*

4. **Find the largest of three numbers.**
   *Hint: compare a>b && a>c first, then b>c.*

5. **Check whether a year is a leap year.** ✅ *Solved below*

6. **Create a simple calculator using switch.**
   *Hint: switch on the operator character; don't forget break after every case.*

**Solution — Q5:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int year; cin >> year;
    bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    cout << (leap ? "Leap year" : "Not a leap year");
    return 0;
}
```
Input: `2024`  →  Output: `Leap year`  ·  Input: `1900`  →  Output: `Not a leap year`

---

### Level 3 — Loops

1. **Print numbers from 1 to N.**
2. **Print numbers from N to 1.**
3. **Find the sum from 1 to N.**
4. **Print a multiplication table.**
5. **Calculate factorial.**
6. **Count the digits in a number.** ✅ *Solved below*
7. **Reverse a number.** *(fully worked in the deck, Day 2)*
8. **Check whether a number is a palindrome.** *(fully worked in the deck, Day 2)*
9. **Check whether a number is prime.** ✅ *Solved below*
10. **Print all prime numbers up to N.**
    *Hint: reuse your Q9 prime check inside a loop from 2 to N.*

**Solution — Q6 (count digits):**
```cpp
int n; cin >> n;
int count = 0;
if (n == 0) count = 1;
while (n > 0) {
    count++;
    n /= 10;
}
cout << count;
```
Input: `2453`  →  Output: `4`

**Solution — Q9 (prime check):**
```cpp
int n; cin >> n;
bool isPrime = (n > 1);
for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) { isPrime = false; break; }
}
cout << (isPrime ? "Prime" : "Not prime");
```
Input: `29`  →  Output: `Prime`  ·  Input: `28`  →  Output: `Not prime`
*Why i * i <= n? A factor larger than √n would need a matching factor smaller than √n — so checking past √n is wasted work.*

---

### Level 4 — Arrays & Vectors

1. **Read and print an array.**
2. **Find the sum of array elements.**
3. **Find minimum and maximum.**
4. **Perform linear search.** ✅ *Solved below*
5. **Count even and odd elements.**
6. **Reverse an array.**
   *Hint: swap arr[i] and arr[size-1-i] while i < size/2.*
7. **Find the second-largest element.** ✅ *Solved below*
8. **Remove duplicate values from a sorted array (conceptually — describe the approach, no need to code it yet).**
   *Hint: since it's sorted, duplicates are always adjacent — compare each element to the previous one.*
9. **Store N values in a vector and print them.**
10. **Sort a vector in ascending order.**
    *Hint: sort(v.begin(), v.end());*

**Solution — Q4 (linear search):**
```cpp
int arr[5] = {4, 2, 9, 7, 5};
int target = 7, foundAt = -1;
for (int i = 0; i < 5; i++) {
    if (arr[i] == target) { foundAt = i; break; }
}
cout << (foundAt == -1 ? "Not found" : "Found at index " + to_string(foundAt));
```
Output: `Found at index 3`

**Solution — Q7 (second-largest):**
```cpp
int arr[5] = {4, 2, 9, 7, 5};
int largest = INT_MIN, second = INT_MIN;
for (int i = 0; i < 5; i++) {
    if (arr[i] > largest) { second = largest; largest = arr[i]; }
    else if (arr[i] > second && arr[i] != largest) { second = arr[i]; }
}
cout << second;
```
Output: `7`

---

### Level 5 — Strings

1. **Find string length.**
2. **Count vowels.**
3. **Reverse a string.** ✅ *Solved below*
4. **Check whether a string is a palindrome.** ✅ *Solved below*
5. **Count uppercase and lowercase letters.**
6. **Count digits in a string.**
7. **Convert a string to lowercase.**
   *Hint: loop through, apply tolower(c) to each character.*
8. **Compare two strings.**
   *Hint: == , < , and > all work directly on std::string.*

**Solution — Q3 (reverse a string):**
```cpp
string s = "Farhaan";
string rev = "";
for (int i = s.length() - 1; i >= 0; i--) {
    rev += s[i];
}
cout << rev;
```
Output: `naahraF`

**Solution — Q4 (palindrome check):**
```cpp
string s = "level";
int left = 0, right = s.length() - 1;
bool isPalindrome = true;
while (left < right) {
    if (s[left] != s[right]) { isPalindrome = false; break; }
    left++; right--;
}
cout << (isPalindrome ? "Palindrome" : "Not a palindrome");
```
Output: `Palindrome`

---

## Easy LeetCode Practice — Verified Set

*Numbers and titles verified against leetcode.com. Solve roughly in this order — each builds on a concept from the ladder above.*

| # | Problem | Concept | Difficulty | Hint |
|---|---------|---------|------------|------|
| 2235 | Add Two Integers | Arithmetic | Easy | Just `return num1 + num2;` |
| 2469 | Convert the Temperature | Arithmetic | Easy | Apply both given formulas directly |
| 412 | Fizz Buzz | Loops, modulus | Easy | Check `%15` first, then `%3`, then `%5` |
| 1342 | Number of Steps to Reduce a Number to Zero | While loop | Easy | Halve if even, subtract 1 if odd |
| 1480 | Running Sum of 1d Array | Prefix sum | Easy | Add each element to a running total as you go |
| 1920 | Build Array from Permutation | Arrays | Easy | `ans[i] = nums[nums[i]]` |
| 1672 | Richest Customer Wealth | 2D arrays | Easy | Sum each row, track the running maximum |
| 2011 | Final Value of Variable After Performing Operations | Strings, loops | Easy | Check for `'+'` vs `'-'` inside each operation string |
| 2114 | Maximum Number of Words Found in Sentences | Strings | Easy | Count spaces in each sentence, add 1 |
| 344 | Reverse String | Two-pointer | Easy | Swap from both ends toward the middle |
| 125 | Valid Palindrome | Two-pointer, strings | Easy | Skip non-alphanumeric characters as you compare |
| 1 | Two Sum | Arrays → hashing | Easy | Brute force O(n²) first, then try `unordered_map` for O(n) |

**Recommended order:** solve 1–5 right after Day 6 (vectors & complexity), 6–9 after finishing strings review, and save Two Sum for last — it's the natural bridge into hashing, which comes right after this course.

---

## Mini Self-Assessment — Full Version

*Give yourself 15–20 minutes, no notes. Then check against the answer key at the end — don't peek early.*

### Part A — Predict the Output

**A1.**
```cpp
int a = 7, b = 2;
cout << a / b << " " << a % b;
```

**A2.**
```cpp
int x = 5;
cout << x++ << " " << x;
```

**A3.**
```cpp
for (int i = 0; i < 3; i++) {
    if (i == 1) continue;
    cout << i;
}
```

**A4.**
```cpp
string s = "Hi";
cout << s + "!" << s.length();
```

**A5.**
```cpp
int arr[3] = {1, 2, 3};
cout << arr[3];
```
*(Trick question — what does this actually do?)*

### Part B — Find the Error

**B1.**
```cpp
int x;
if (x = 10) cout << "ten";
```

**B2.**
```cpp
for (int i = 0; i <= 5; i++)
    cout << arr[i];   // arr has 5 elements
```

**B3.**
```cpp
void change(int x) {
    x = 100;
}
int main() {
    int a = 5;
    change(a);
    cout << a;   // expected 100
}
```

**B4.**
```cpp
int a;
cout << a;   // expecting 0
```

**B5.**
```cpp
cin >> n;
getline(cin, name);   // name always comes out empty
```

### Part C — Write Code

**C1.** Write a function `int maxOfThree(int a, int b, int c)` that returns the largest of three integers.

**C2.** Write a loop that prints all even numbers from 1 to 20.

**C3.** Write a function `void printVector(const vector<int>& v)` that prints every element separated by a space.

### Part D — Explain in Words

**D1.** What is the difference between an array and a vector?

**D2.** What is the difference between pass by value and pass by reference?

**D3.** Why does integer division sometimes produce an unexpected answer?

**D4.** Why do array indices start at zero?

**D5.** Why is `const vector<int>&` useful as a function parameter?

---

### Answer Key

**Part A**
- A1: `3 1` — 7/2 truncates to 3; 7%2 leaves remainder 1.
- A2: `5 6` — postfix x++ returns 5 first, then increments x to 6.
- A3: `02` — continue skips printing when i == 1.
- A4: `Hi!2` — concatenation happens first, but s.length() still refers to the original "Hi" (length 2), not "Hi!".
- A5: Undefined behaviour — arr[3] reads one past the last valid index (0–2). It may print garbage, or crash. This is exactly the off-by-one danger covered on Day 4.

**Part B**
- B1: `=` assigns instead of comparing; should be `if (x == 10)`. Also x is used while uninitialised.
- B2: `i <= 5` reads index 5 on a 5-element array (valid indices are 0–4) — should be `i < 5`.
- B3: change(int x) takes x by value, so the copy is modified, not a. Fix: `void change(int& x)`.
- B4: Local variables are not automatically zero-initialised — a must be given a value before use.
- B5: The leftover '\n' from cin >> is still in the buffer. Fix: call `cin.ignore();` before `getline(cin, name);`.

**Part C — sample solutions**
```cpp
int maxOfThree(int a, int b, int c) {
    int m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    return m;
}
```
```cpp
for (int i = 2; i <= 20; i += 2) cout << i << ' ';
```
```cpp
void printVector(const vector<int>& v) {
    for (int x : v) cout << x << ' ';
}
```

**Part D**
- D1: Arrays are fixed-size and lower-level; vectors are dynamic (can grow with push_back), track their own size, and are the standard choice in DSA interviews.
- D2: Pass by value copies the argument, so changes inside the function don't affect the caller's variable. Pass by reference (int&) gives the function direct access to the original variable.
- D3: When both operands of / are integers, C++ performs integer division and truncates the decimal part — 5/2 gives 2, not 2.5. Cast at least one operand to double to get a decimal result.
- D4: Zero-based indexing matches how an element's memory address is computed from the array's base address — index i sits at base + i * (size of one element).
- D5: The & avoids copying the vector on every call (fast, even for huge inputs), and const documents — and enforces — that the function only reads the data, never modifies it.


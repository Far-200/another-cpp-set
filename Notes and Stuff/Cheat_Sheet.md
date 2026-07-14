# C++ Syntax Cheat Sheet — One-Page Reference

### Starter Template
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);   // fast I/O — standard in DSA
    cin.tie(nullptr);

    return 0;
}
```

### Input / Output
| Task | Syntax |
|---|---|
| Read values | `cin >> a >> b;` |
| Print values | `cout << a << b;` |
| Read a full line | `getline(cin, s);` |
| Fix the cin→getline trap | `cin.ignore();` before `getline()` |
| Newline (prefer over endl in loops) | `'\n'` |

### Data Types
`int` · `long long` (big numbers) · `float` · `double` · `char` · `bool` · `string` — check any size with `sizeof(type)`

### Operators
`+ - * /  %` (remainder, ints only) · `== != < > <= >=` · `&& \|\| !` · `= += -= *= /=` · `++x` / `x++`
⚠ `5 / 2` → `2` (integer division). Fix: `static_cast<double>(a) / b`
⚠ `if (x = 5)` assigns, not compares. Use `==`.

### Conditionals
```cpp
if (cond) { }
else if (cond2) { }
else { }

switch (x) {
    case 1: /* ... */ break;
    default: /* ... */
}
```

### Loops
```cpp
for (int i = 0; i < n; i++) { }
while (cond) { }
do { } while (cond);
```
`break;` exits the loop entirely · `continue;` skips to the next iteration
⚠ For size N, always `i < N`, never `i <= N`.

### Functions & References
```cpp
int add(int a, int b) { return a + b; }         // pass by value — copies
void change(int& x) { x = 100; }                  // pass by reference — modifies original
void read(const int& x) { cout << x; }              // const ref — reads without copying
```

### Arrays & 2D Arrays
```cpp
int arr[5] = {1, 2, 3, 4, 5};      // index 0 .. size-1
int matrix[2][3] = {{1,2,3},{4,5,6}};  // matrix[row][col]
```

### Strings
```cpp
string s = "hi";
s.length();  s[0];  s + "!";                 // length, index, concatenate
for (char c : s) { }                            // loop through characters
#include <cctype>  // tolower(c) toupper(c) isdigit(c) isalpha(c)
```

### Pointers (the essentials)
```cpp
int v = 10;
int* p = &v;      // p stores v's address
cout << *p;         // *p follows the address back to 10
```

### Vectors (your default array)
```cpp
#include <vector>
vector<int> v;
v.push_back(10);  v.pop_back();  v.size();  v.empty();  v.front();  v.back();
for (const int& x : v) { }               // read without copying
void f(const vector<int>& v) { }          // pass large containers like this
```

### Useful STL
```cpp
#include <algorithm>
sort(v.begin(), v.end());
reverse(v.begin(), v.end());
min(a, b);  max(a, b);
pair<int, string> p = {1, "Farhaan"};  p.first;  p.second;
```

### Time & Space Complexity
| Notation | Meaning | Example |
|---|---|---|
| O(1) | Constant | `arr[0]` |
| O(log n) | Halves each step | binary search |
| O(n) | One pass | single `for` loop |
| O(n²) | Nested pass | loop inside a loop |

### Compile & Run
```bash
g++ main.cpp -o main   &&   ./main          # Linux / macOS
g++ main.cpp -o main.exe   &&   main.exe    # Windows
```

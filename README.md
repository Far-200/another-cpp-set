# C++ From Scratch

A structured repository documenting my journey of learning C++ from the basics, following a college-style approach with explanations, handwritten notes, practice programs, assignments, and revision material.

The objective is not just to memorize syntax, but to understand how C++ works and gradually build the foundation required for Data Structures and Algorithms.

> Current mission: learn C++ first, then survive DSA. 🫠

---

## About This Repository

This repository contains:

- Topic-wise C++ programs
- Practice questions and solutions
- Session-based learning material
- Daily assignments
- Revision notes
- A C++ presentation
- A cheat sheet
- A practice pack
- A seven-day revision plan

Each topic is studied in the following order:

1. Learn the concept
2. Understand the syntax
3. Study small examples
4. Solve a practice question
5. Review mistakes
6. Move to the next concept

The code is written gradually as I learn, so the repository also shows my progress from basic syntax toward problem-solving and DSA.

---

## Repository Structure

```text
CPP/
│
├── Codes/
│   │
│   ├── Day 1/
│   │   ├── Day 1 Assignment/
│   │   ├── Session 1/
│   │   └── Session 2/
│   │
│   └── Day 2/
│
├── Notes and Stuff/
│   ├── Cheat_Sheet.md
│   ├── CPP_From_Scratch.pptx
│   ├── Practice_Pack.md
│   └── Seven_Day_Revision_Plan.md
│
├── .gitignore
└── README.md
```

### `Codes`

Contains all C++ source files, organized by learning day and session.

### `Day 1 Assignment`

Contains practice programs and revision exercises based on the concepts learned during Day 1.

### `Session 1`, `Session 2`, etc.

Each session contains programs written while learning a particular group of concepts.

### `Notes and Stuff`

Contains supporting learning resources:

| File                         | Purpose                                     |
| ---------------------------- | ------------------------------------------- |
| `Cheat_Sheet.md`             | Quick C++ syntax and concept reference      |
| `CPP_From_Scratch.pptx`      | Detailed beginner-friendly C++ presentation |
| `Practice_Pack.md`           | Topic-wise practice questions               |
| `Seven_Day_Revision_Plan.md` | Structured revision schedule                |

---

## Topics Covered So Far

### Basic C++ Program Structure

- `#include <iostream>`
- `using namespace std`
- The `main()` function
- Curly braces
- Semicolons
- `return 0`

### Output

- `cout`
- Insertion operator `<<`
- Printing text and variables
- New lines using `\n`, `'\n'`, and `endl`

### Comments

- Single-line comments
- Multi-line comments

### Variables

- Declaration
- Initialization
- Assignment
- Variable naming rules
- camelCase naming convention

### Basic Data Types

- `int`
- `float`
- `double`
- `char`
- `string`
- `bool`

### User Input

- `cin`
- Extraction operator `>>`
- Accepting integer, decimal, character, string, and Boolean input
- Limitations of `cin >>` when reading text containing spaces

### Arithmetic

- Addition: `+`
- Subtraction: `-`
- Multiplication: `*`
- Division: `/`
- Modulus: `%`
- Integer division
- Decimal division
- Type conversion using `static_cast<double>()`

### Assignment Operators

- `+=`
- `-=`
- `*=`
- `/=`
- `%=`

### Increment and Decrement

- `++`
- `--`

More topics will be added as the learning journey continues.

---

## Example Program

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    int semester;
    double cgpa;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your semester: ";
    cin >> semester;

    cout << "Enter your CGPA: ";
    cin >> cgpa;

    cout << "\n--- Student Profile ---\n";
    cout << "Name: " << name << '\n';
    cout << "Semester: " << semester << '\n';
    cout << "CGPA: " << cgpa << '\n';

    return 0;
}
```

---

## Requirements

To compile and run the programs, you need:

- A C++ compiler supporting modern C++
- GCC or MinGW-w64 on Windows
- Visual Studio Code or another code editor
- A terminal or command prompt

This repository primarily uses:

- Visual Studio Code
- MinGW-w64 / `g++`
- Windows PowerShell

---

## Compiling a Program

Open the terminal inside the folder containing the C++ file.

Compile using:

```bash
g++ program.cpp -o program
```

Run it on Windows:

```powershell
.\program.exe
```

Example:

```bash
g++ StudentProfile.cpp -o StudentProfile
```

```powershell
.\StudentProfile.exe
```

You may also compile using a modern C++ standard:

```bash
g++ -std=c++17 StudentProfile.cpp -o StudentProfile
```

---

## Recommended File Naming

Use meaningful names for source files:

```text
HelloWorld.cpp
DataTypes.cpp
StudentProfile.cpp
GameReport.cpp
MiniCalculator.cpp
```

Prefer the standard `.cpp` extension.

Avoid vague names such as:

```text
test.cpp
new.cpp
finalfinal2.cpp
workingmaybe.cpp
```

Future Farhaan deserves better than digital archaeology. 🫠

---

## Coding Style Used

Programs in this repository generally follow these conventions:

### Braces

```cpp
int main()
{
    return 0;
}
```

### Variable Names

Use camelCase:

```cpp
studentName
hoursPlayed
learningCpp
performanceGrade
```

### New Lines

Prefer:

```cpp
cout << "Hello" << '\n';
```

instead of repeatedly using:

```cpp
cout << "Hello" << endl;
```

### Comments

Comments should explain the purpose or reasoning behind the code:

```cpp
// Calculates both integer and decimal division.
```

Avoid unnecessary comments that simply repeat the code:

```cpp
// Prints hello
cout << "Hello";
```

---

## Learning Roadmap

The planned progression is:

1. C++ program structure
2. Variables and data types
3. Input and output
4. Operators and expressions
5. Conditional statements
6. Loops
7. Functions
8. Arrays
9. Strings
10. Pointers and references
11. Structures and classes
12. Object-oriented programming
13. Standard Template Library
14. Time and space complexity
15. Data Structures and Algorithms

The roadmap may evolve depending on how much suffering each topic produces. 🫠

---

## Goals

By maintaining this repository, I aim to:

- Build a strong foundation in C++
- Develop consistent coding habits
- Understand concepts instead of copying solutions
- Practice writing programs independently
- Prepare for Data Structures and Algorithms
- Track mistakes and improvement over time
- Create a useful revision resource for the future

---

## Progress Philosophy

The purpose of this repository is learning, not pretending every solution appeared perfectly on the first attempt.

Some programs may contain:

- Earlier approaches
- Beginner mistakes
- Corrected versions
- Experimental syntax
- Questionable variable values
- Evidence of academic survival

That progression is intentional. Mistakes are reviewed instead of silently erased because they show what was learned.

---

## Notes

- Executable files and compiler-generated files are excluded through `.gitignore`.
- Source files, Markdown notes, and the PowerPoint presentation are tracked.
- Folder names currently contain spaces, so paths may need quotation marks in terminal commands.
- Programs are written mainly for learning and may prioritize clarity over advanced optimization.

---

## Status

This repository is actively being updated as I continue learning C++.

Current phase:

```text
C++ Basics → Practice → Revision → DSA Preparation
```

---

## Author

**Farhaan**

B.Tech Computer Science and Engineering student attempting to learn C++ before DSA arrives with a steel chair. 🫠

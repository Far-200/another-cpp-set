# Seven-Day Revision Plan — C++ From Scratch

*Use this to revise after going through the slide deck once, or as a self-paced schedule if you're working through it solo. Each day: review the slides, then clear the linked practice before moving on. Don't rush into Day 8 (recursion) until every "Done when" box below is genuinely true.*

---

## Day 1 — Program Structure, Variables, I/O, Operators
**Slides:** Sections 1–9 (Why C++ · Setup · First Program · Comments · Variables · Data Types · Constants · I/O · Operators · Type Casting)

**Cover:**
- Why C++, and how it compares to C
- Compiling with g++, the compile → run cycle
- Your first program, line by line, and why namespaces exist
- Variables as memory boxes; data types and `sizeof()`
- Constants, literals, and `'A'` vs `"A"`
- `cin` / `cout` / `getline()` and the classic newline trap
- Arithmetic, relational, logical, assignment operators — and the integer-division gotcha
- Implicit vs explicit type conversion

**Practice:** Practice Pack, Level 1 (all 6 questions) + Level 2, Q1–Q4

**Done when:**
- [ ] You can write and compile a Hello World program from memory
- [ ] You can explain why `5 / 2` prints `2`, not `2.5`
- [ ] You can explain the difference between `=` and `==`
- [ ] You know when to use `cin.ignore()`

---

## Day 2 — Conditions & Loops
**Slides:** Sections 10–14 (Conditionals · Switch · While/Do-While · For Loop · Break/Continue · Nested Loops)

**Cover:**
- if / else if / else, and dry-running conditions by hand
- switch, fall-through, and break
- while vs do-while
- for loops — init / condition / update, and tracing iterations
- break vs continue
- Nested loops and pattern printing

**Practice:** Practice Pack, Level 2 (Q5–Q6) + Level 3 (all 10 questions)

**Done when:**
- [ ] You can dry-run a `for` loop on paper without miscounting iterations
- [ ] You've solved reverse-a-number and palindrome-check without looking at the solution
- [ ] You can explain the difference between `break` and `continue` in one sentence each

---

## Day 3 — Functions, Scope & References
**Slides:** Sections 15–17 (Functions · Pass by Value/Reference · const References · Overloading & Defaults)

**Cover:**
- Why functions exist; declaration vs definition; scope
- Pass by value vs pass by reference (the memory-box diagram)
- `const` references — reading without copying
- Function overloading and default arguments

**Practice:** Write 3 small functions of your own (e.g. `isEven`, `factorial`, `maxOfThree`) and call them from `main()`. Then rewrite one to take a `vector<int>` by `const &` instead of by value.

**Done when:**
- [ ] You can explain, without notes, why `void change(int x)` doesn't modify the caller's variable but `void change(int& x)` does
- [ ] You know when to use `const vector<int>&` in a function signature

---

## Day 4 — Arrays & Matrices
**Slides:** Sections 18–19 (Arrays · 2D Arrays)

**Cover:**
- Fixed-size arrays, zero-based indexing, the off-by-one mistake
- Sum, max, linear search, reversing an array in place
- 2D arrays / matrices, row-wise and column-wise traversal

**Practice:** Practice Pack, Level 4 (all 10 questions)

**Done when:**
- [ ] You instinctively write `i < size`, never `i <= size`
- [ ] You can traverse a 2D array both row-wise and column-wise without looking it up

---

## Day 5 — Strings & Pointers
**Slides:** Sections 20–22 (std::string · Pointers · Dynamic Memory)

**Cover:**
- `std::string`: length, indexing, concatenation, comparison, looping
- `<cctype>` helpers: `tolower`, `toupper`, `isdigit`, `isalpha`
- Pointers: `&` and `*`, just enough for what's ahead
- `nullptr`, and why `vector` beats manual `new` / `delete` for now

**Practice:** Practice Pack, Level 5 (all 8 questions)

**Done when:**
- [ ] You can explain what `*pointer` does, in your own words
- [ ] You've solved the vowel-count and palindrome-check string exercises

---

## Day 6 — Vectors, STL & Complexity
**Slides:** Sections 23–26 (std::vector · Array vs Vector · Beginner STL · Complexity)

**Cover:**
- `std::vector`: push_back, pop_back, size, front/back, range-based for
- Array vs vector, and passing containers by `const &`
- `pair`, `sort`, `reverse`, `min`, `max`
- Big-O basics: O(1), O(log n), O(n), O(n²)

**Practice:** Practice Pack Level 4, Q9–Q10 (redo using vector instead of array). Then, for every solution from Days 1–5, write down its time complexity.

**Done when:**
- [ ] You default to `vector<int>` instead of a fixed array for new problems
- [ ] You can label a loop as O(n) and a nested loop as O(n²) without hesitating

---

## Day 7 — Mistakes, Practice & Interview Readiness
**Slides:** Sections 27–33 (C→C++ Mistakes · Problem-Solving Framework · LeetCode Set · Mini Assessment · Cheat Sheet · What's Next)

**Cover:**
- The 15 most common C→C++ transition mistakes — review the ones you've actually made
- The 9-step framework for reading any problem
- The verified Easy LeetCode set (12 problems)
- Mini self-assessment (Practice Pack has the full version with answer key)
- The one-page cheat sheet — keep this open during your first few LeetCode attempts

**Practice:** Practice Pack — full Mini Self-Assessment, then all 12 LeetCode problems, roughly in the listed order. Spend the most time on Two Sum: brute force first, hash map second.

**Done when:**
- [ ] You've solved at least 8 of the 12 LeetCode problems unaided
- [ ] You scored well on the self-assessment, or revisited the specific slides where you didn't
- [ ] You feel ready to start recursion next — the next stop on the roadmap

---

### After Day 7
Move on to: **recursion → sorting algorithms → binary search → linked lists → stacks & queues → hashing → trees → graphs → dynamic programming.**
Don't rush there until every box above is checked — speed later comes from the depth you build this week.

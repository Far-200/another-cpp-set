# Arrays — Day 6

## 1. What an array actually is

An array is a **contiguous block of memory** holding elements of the **same type**.
"Contiguous" = the elements sit right next to each other in RAM, no gaps.

```
int a[5] = {10, 20, 30, 40, 50};

index:     0     1     2     3     4
         +-----+-----+-----+-----+-----+
value:   |  10 |  20 |  30 |  40 |  50 |
         +-----+-----+-----+-----+-----+
addr:    1000  1004  1008  1012  1016      (int = 4 bytes)
```

Because it's contiguous and every element is the same size, the computer finds
element `i` with one multiplication:  `address = base + i * sizeof(type)`.
That is why array access `a[i]` is **O(1)** — instant, regardless of size.

Key consequences:
- Indexing starts at **0**. Last valid index is `size - 1`.
- Size is **fixed** at creation (for raw C++ arrays). You cannot grow it later.
- Going outside `0 .. size-1` is **undefined behaviour** — no error, just
  silent corruption or a crash. This is the #1 beginner bug.

## 2. Declaring and initializing

```cpp
int a[5];                     // 5 ints, values are GARBAGE (uninitialized)
int b[5] = {1, 2, 3, 4, 5};   // all five set
int c[5] = {1, 2};            // c = {1, 2, 0, 0, 0}  (rest zero-filled)
int d[5] = {};                // all zeros
int e[]  = {4, 8, 15, 16};    // size deduced = 4
```

Size must be a compile-time constant:
```cpp
const int N = 100;
int arr[N];                   // OK
// int n; cin >> n; int arr[n];   // NOT standard C++ (works on some compilers, don't rely on it)
```
For a runtime size you use `std::vector` (later) or dynamic allocation.

## 3. The size trick

C++ raw arrays don't know their own length. Common patterns:

```cpp
int a[] = {3, 1, 4, 1, 5, 9};
int n = sizeof(a) / sizeof(a[0]);   // total bytes / bytes per element = 6
```
This only works in the scope where the array is declared. Once you pass an array
to a function it "decays" to a pointer and `sizeof` no longer gives the length —
so you pass the length as a separate parameter:

```cpp
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}
```

## 4. Traversal — the core loop

```cpp
for (int i = 0; i < n; i++) {
    // use a[i]
}
```
Burn this into muscle memory: `i = 0`, condition `i < n` (not `<=`), `i++`.

Range-based for (read-only convenience):
```cpp
for (int x : a) cout << x << " ";
```

## 5. Operations you must be able to write blind

| Task                | Idea                                                        | Complexity |
|---------------------|------------------------------------------------------------|------------|
| Sum / average       | accumulate in a running total                              | O(n)       |
| Max / min           | assume `a[0]` is best, scan rest, update                   | O(n)       |
| Linear search       | scan until you find the target, return index or -1         | O(n)       |
| Reverse in place    | swap `a[i]` and `a[n-1-i]` for `i` in `0 .. n/2`           | O(n)       |
| Count occurrences   | increment a counter on match                               | O(n)       |
| Second largest      | track largest AND secondLargest in one pass                | O(n)       |

## 6. Common bugs checklist

- `i <= n` instead of `i < n`  → reads one past the end.
- Forgetting arrays are 0-indexed → off-by-one everywhere.
- Uninitialized array then reading it → garbage values.
- Initializing max to `0` when the array can be all negatives → use `a[0]` instead.
- Passing an array to a function and using `sizeof` inside → wrong length.

## 7. How to practice (do this, don't skip)

1. Read the problem in `practice.cpp`.
2. Write the solution yourself first. Compile. Test with your own inputs.
3. Only then ask me to check it or reveal my version.
4. For every solution, say out loud: what's the time complexity? space?

Compile & run (from this folder):
```
g++ program_1.cpp -o program_1 && ./program_1
```

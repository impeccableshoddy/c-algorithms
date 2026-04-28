# Module 04 — Arrays

Demonstrates core array techniques through concrete C implementations.
Each task is isolated in its own source file with complexity analysis as comments.

## Build

```bash
make          # builds all test binaries into bin/
make test     # builds and runs all tests
make clean    # removes bin/ and obj/
```

## Run a single test

```bash
make
./bin/test_kadane
```

## Structure

```
04_arrays/
├── include/
│   └── arrays.h               # all declarations
├── src/
│   ├── traversal.c            # Task 1: traversal and basic operations
│   ├── prefix_sum.c           # Task 2: prefix sum technique
│   ├── kadane.c               # Task 3: Kadane's algorithm
│   ├── two_pointers.c         # Task 4: two pointer technique
│   ├── sliding_window.c       # Task 5: sliding window technique
│   ├── rotation.c             # Task 6: array rotation
│   └── matrix.c               # Task 7: matrix traversal
├── tests/
│   └── test_traversal.c       # and one per src file
├── Makefile
└── tasks.md
```

## Complexity comment format used throughout

```c
// Time: O(n) — single pass through all elements
// Space: O(1) — no extra allocation
```

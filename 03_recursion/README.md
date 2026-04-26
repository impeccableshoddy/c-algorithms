# Module 03 — Recursion

Demonstrates core recursion patterns through concrete C implementations.
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
./bin/test_hanoi
```

## Structure

```
03_recursion/
├── include/
│   └── recursion.h            # all declarations
├── src/
│   ├── base_cases.c           # Task 1: base case identification
│   ├── tree_recursion.c       # Task 2: branching recursive calls
│   ├── tail_recursion.c       # Task 3: ordinary vs tail recursion
│   ├── hanoi.c                # Task 4: Tower of Hanoi
│   └── memoization.c          # Task 5: memoization intro
├── tests/
│   └── test_base_cases.c      # and one per src file
├── Makefile
└── tasks.md
```

## Complexity comment format used throughout

```c
// Time: O(2^n) — branches into two calls each level
// Space: O(n) — call stack depth
// Recurrence: T(n) = 2T(n-1) + O(1)
```

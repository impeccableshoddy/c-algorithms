# Module 02 — Complexity Analysis

Demonstrates time and space complexity through concrete C implementations.
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
./bin/test_trace
```

## Structure

```
02_complexity/
├── include/
│   └── complexity.h       # all declarations
├── src/
│   ├── trace.c            # Task 1: trace and determine complexity
│   ├── growth.c           # Task 2: demonstrate each growth class
│   ├── space.c            # Task 3: space complexity
│   ├── recurrence.c       # Task 4: recurrence relations
│   ├── master_theorem.c   # Task 5: Master Theorem cases
│   ├── amortized.c        # Task 6: amortized analysis
│   └── three_notations.c  # Task 7: O, Omega, Theta
├── tests/
│   └── test_trace.c       # and one per src file
├── Makefile
└── tasks.md
```

## Complexity comment format used throughout

```c
// Time: O(n) — single pass through all elements
// Space: O(1) — one extra variable
// Recurrence: T(n) = T(n-1) + O(1)
```

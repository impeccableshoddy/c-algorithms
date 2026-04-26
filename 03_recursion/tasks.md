# Recursion — Coding Tasks

Complete these tasks in order. Add a complexity comment before every function you write.

---

## Task 1: Base Case Identification

For each stub, identify and implement the correct base case(s). Each function must handle its base case explicitly and recurse correctly.

```c
// Task 1a — sum of digits
int sum_digits(int n);

// Task 1b — reverse a string in place
void reverse_string(char *s, int left, int right);

// Task 1c — check if array is sorted
int is_sorted(int arr[], int n);

// Task 1d — GCD (Euclidean)
int gcd(int a, int b);
```

Deliverable: `src/base_cases.c`

---

## Task 2: Tree Recursion

Each call branches into multiple recursive calls.

```c
// Task 2a — Fibonacci (naive, then memoized)
int fib_naive(int n);
int fib_memo(int n, int memo[]);

// Task 2b — count all paths in an n x m grid moving only right or down
int count_paths(int n, int m);

// Task 2c — generate all subsets (print each as a bitmask int)
void generate_subsets(int n, int current, int index);
```

Deliverable: `src/tree_recursion.c`

---

## Task 3: Tail Recursion

Implement each function twice: once as ordinary recursion, once as tail recursion using an accumulator. State in a comment whether the compiler can optimize the tail version and why.

```c
// Task 3a
int factorial_recursive(int n);
int factorial_tail(int n, int acc);

// Task 3b
int sum_array_recursive(int arr[], int n);
int sum_array_tail(int arr[], int n, int acc);

// Task 3c
int power_recursive(int base, int exp);
int power_tail(int base, int exp, int acc);
```

Deliverable: `src/tail_recursion.c`

---

## Task 4: Tower of Hanoi

```c
// Task 4a — classic three-peg Tower of Hanoi
// Print each move as: "Move disk N from A to C"
void hanoi(int n, char from, char to, char aux);

// Task 4b — count the minimum number of moves for n disks
//           derive the recurrence, state it as a comment, then implement
int hanoi_count(int n);
```

Above `hanoi_count`, write:
- The recurrence relation
- Its closed-form solution
- The resulting time complexity

Deliverable: `src/hanoi.c`

---

## Task 5: Memoization Intro

Convert each naive recursive solution into a memoized one. Use a static or passed-in array for the cache.

```c
// Task 5a — climbing stairs: 1 or 2 steps at a time, n stairs
int climb_naive(int n);
int climb_memo(int n, int memo[]);

// Task 5b — minimum coins to make amount
//           coins[] is sorted, k is the number of coin denominations
int min_coins_naive(int coins[], int k, int amount);
int min_coins_memo(int coins[], int k, int amount, int memo[]);

// Task 5c — longest increasing subsequence length
int lis_naive(int arr[], int n, int prev_index, int curr_index);
int lis_memo(int arr[], int n, int prev_index, int curr_index, int memo[][]);
```

For each pair, write a comment comparing the time complexity before and after memoization.

Deliverable: `src/memoization.c`

---

## Summary

| File | Contents |
|------|----------|
| `src/base_cases.c` | sum_digits, reverse_string, is_sorted, gcd |
| `src/tree_recursion.c` | fib_naive, fib_memo, count_paths, generate_subsets |
| `src/tail_recursion.c` | factorial, sum_array, power — both forms each |
| `src/hanoi.c` | hanoi, hanoi_count with recurrence comment |
| `src/memoization.c` | climb, min_coins, lis — naive + memo pairs |

---

## Complexity Comment Format

```c
// Time: O(2^n) — branches into two calls each level
// Space: O(n) — call stack depth
// Recurrence: T(n) = 2T(n-1) + O(1)
int fib_naive(int n) { ... }
```

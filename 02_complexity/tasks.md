# Complexity Analysis — Coding Tasks

Complete these tasks in order. For every function you write, add a complexity comment before the function signature.

---

## Task 1: Trace and Determine

For each code block, determine the time and space complexity. Write your answer as a comment above the block.

```c
// Task 1a
arr[4];

// Task 1b
for (int i = 0; i < n; i++) {
    printf("%d\n", arr[i]);
}

// Task 1c
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        printf("%d\n", arr[i][j]);
    }
}

// Task 1d
for (int i = 0; i < n; i++) printf("%d\n", arr[i]);
for (int i = 0; i < n; i++) printf("%d\n", arr[i]);

// Task 1e
int i = n;
while (i > 1) {
    i = i / 2;
}

// Task 1f — implement this, then state its complexity
int binary_search(int arr[], int n, int target);
```

Deliverable: `src/trace.c` — implement `trace_1a` through `trace_1f` with complexity comments.

---

## Task 2: Identify the Growth

Implement each function. State complexity before the signature.

```c
// Given — analyze only
int get_first(int arr[]) { return arr[0]; }

// You implement
int find_sum(int arr[], int n);
int find_max_pair_sum(int arr[], int n);
void merge_sort(int arr[], int left, int right);
int count_subsets(int n);
```

Deliverable: `src/growth.c`

---

## Task 3: Space Complexity

Implement each function. State time and space complexity before each signature.

```c
// Given — analyze only
int find_max(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max) max = arr[i];
    return max;
}

// You implement
int *copy_array(int arr[], int n);
int factorial_recursive(int n);
int binary_search_recursive(int arr[], int left, int right, int target);
```

Deliverable: `src/space.c`

---

## Task 4: Recurrence Relations

Implement each function. Write the recurrence relation and its resolved complexity as a comment before each.

```c
// Given — T(n) = T(n-1) + O(1) -> O(n)
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// You implement — state recurrence before each
int count_bits(int n);
void merge_sort_labeled(int arr[], int left, int right);
int sum_all_pairs(int arr[], int n);
```

Deliverable: `src/recurrence.c`

---

## Task 5: Master Theorem

For each recurrence below, identify which Master Theorem case applies and why. Then implement a function that exhibits that complexity.

```
T(n) = 2T(n/2) + n     — Case ?  ->  result ?
T(n) = 2T(n/2) + n^2   — Case ?  ->  result ?
T(n) = 2T(n/2) + 1     — Case ?  ->  result ?
```

Deliverable: `src/master_theorem.c` — one function per case with the recurrence, case identification, and result as comments.

---

## Task 6: Amortized Analysis

Implement a dynamic array that doubles capacity when full. After implementing, write a comment block above the struct explaining the amortized cost of push per operation and why.

```c
typedef struct {
    int *data;
    int size;
    int capacity;
} DynamicArray;

void da_push(DynamicArray *da, int value);
```

Deliverable: `src/amortized.c`

---

## Task 7: Big-O vs Big-Omega vs Big-Theta

Implement three search functions: one that hits best case, one worst case, one average case. State O, Omega, and Theta for each.

```c
int search_best_case(int arr[], int n, int target);
int search_worst_case(int arr[], int n, int target);
int search_average_case(int arr[], int n, int target);
```

Deliverable: `src/three_notations.c`

---

## Summary

| File | Contents |
|------|----------|
| `src/trace.c` | trace_1a through trace_1f |
| `src/growth.c` | find_sum, find_max_pair_sum, binary_search_index, merge_sort |
| `src/space.c` | copy_array, factorial_recursive, binary_search_recursive |
| `src/recurrence.c` | count_bits, merge_sort_labeled, sum_all_pairs, count_subsets |
| `src/master_theorem.c` | one function per Master Theorem case |
| `src/amortized.c` | DynamicArray with da_push |
| `src/three_notations.c` | search_best_case, search_worst_case, search_average_case |

---

## Complexity Comment Format

```c
// Time: O(n) — single pass through all elements
// Space: O(1) — one extra variable
// Recurrence (if recursive): T(n) = T(n-1) + O(1)
int find_sum(int arr[], int n) { ... }
```

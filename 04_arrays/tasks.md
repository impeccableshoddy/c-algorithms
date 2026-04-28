# Arrays — Coding Tasks

Complete these tasks in order. Add a complexity comment before every function you write.

---

## Task 1: Traversal and Basic Operations

Implement each function. State time and space complexity before each signature.

```c
// Given — analyze only
void print_array(int arr[], int n);

// You implement
int find_min(int arr[], int n);
int find_max(int arr[], int n);
int linear_search(int arr[], int n, int target);
void reverse_array(int arr[], int n);
int binary_search(int arr[], int n, int target);
```

Deliverable: `src/traversal.c`

---

## Task 2: Prefix Sum

```c
// You implement
void build_prefix(int arr[], int prefix[], int n);
int range_sum(int prefix[], int l, int r);
int count_subarrays_with_sum(int arr[], int n, int target);
```

Above `count_subarrays_with_sum`, explain in a comment why a naive O(n²)
approach works and how prefix sum reduces it, and to what complexity.

Deliverable: `src/prefix_sum.c`

---

## Task 3: Kadane's Algorithm

```c
// You implement
int max_subarray_sum(int arr[], int n);
int max_subarray_sum_indices(int arr[], int n, int *start, int *end);
```

Above the first function, write the core insight of Kadane's as a comment —
what decision is made at each step and why.

Deliverable: `src/kadane.c`

---

## Task 4: Two Pointers

```c
// You implement
int two_sum_sorted(int arr[], int n, int target, int *i, int *j);
void move_zeros(int arr[], int n);
int remove_duplicates(int arr[], int n);
int trap_rain_water(int arr[], int n);
```

Deliverable: `src/two_pointers.c`

---

## Task 5: Sliding Window

```c
// You implement
int max_sum_fixed_window(int arr[], int n, int k);
int longest_subarray_at_most_k(int arr[], int n, int k);
int min_window_size_sum_k(int arr[], int n, int k);
```

Above each function, state whether the window is fixed or variable and why.

Deliverable: `src/sliding_window.c`

---

## Task 6: Rotation

```c
// You implement
void rotate_left(int arr[], int n, int k);
void rotate_right(int arr[], int n, int k);
int find_rotation_count(int arr[], int n);
int search_rotated(int arr[], int n, int target);
```

Above `search_rotated`, explain the approach in a comment —
how you identify which half is sorted and why that lets you binary search.

Deliverable: `src/rotation.c`

---

## Task 7: Matrix Traversal

```c
// You implement
void print_row_col(int mat[][100], int rows, int cols);
void spiral_order(int mat[][100], int rows, int cols);
void diagonal_traversal(int mat[][100], int n);
int search_matrix(int mat[][100], int rows, int cols, int target);
```

Deliverable: `src/matrix.c`

---

## Summary

| File | Contents |
|------|----------|
| `src/traversal.c` | find_min, find_max, linear_search, reverse_array, binary_search |
| `src/prefix_sum.c` | build_prefix, range_sum, count_subarrays_with_sum |
| `src/kadane.c` | max_subarray_sum, max_subarray_sum_indices |
| `src/two_pointers.c` | two_sum_sorted, move_zeros, remove_duplicates, trap_rain_water |
| `src/sliding_window.c` | max_sum_fixed_window, longest_subarray_at_most_k, min_window_size_sum_k |
| `src/rotation.c` | rotate_left, rotate_right, find_rotation_count, search_rotated |
| `src/matrix.c` | print_row_col, spiral_order, diagonal_traversal, search_matrix |

---

## Complexity Comment Format

```c
// Time: O(n) — single pass
// Space: O(1) — no extra allocation
int find_max(int arr[], int n) { ... }
```

#ifndef COMPLEXITY_H
#define COMPLEXITY_H

// Trace
int trace_1a(int arr[]);
void trace_1b(int arr[], int n);
void trace_1c(int n, int arr[][n]);
void trace_1d(int arr[], int n);
void trace_1e(int n);
int trace_1f(int arr[], int n, int target);

// Growth
int find_sum(int arr[], int n);
int find_max_pair_sum(int arr[], int n);
void merge(int arr[], int left, int mid, int right);
void merge_sort(int arr[], int left, int right);
int count_subsets(int n);

// Space
int *copy_array(int arr[], int n);
int factorial_recursive(int n);
int binary_search_recursive(int arr[], int left, int right, int target);

// Recurrence
int count_bits(int n);
void merge_labelled(int arr[], int left, int mid, int right);
void merge_sort_labelled(int arr[], int left, int right);
int sum_all_pairs(int arr[], int n);
int count_subsets_labelled(int n);

// Master Theorem
void case_1(int n);
void case_2(int n);
void case_3(int n);

// Amortized Analysis
typedef struct {
    int *data;
    int size;
    int capacity;
} DynamicArray;
void da_push(DynamicArray *da, int value);

// Three Notations
int search_best_case(int arr[], int n, int target);
int search_worst_case(int arr[], int n, int target);
int search_average_case(int arr[], int n, int target);

#endif

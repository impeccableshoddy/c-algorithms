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

#endif

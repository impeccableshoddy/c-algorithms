#ifndef RECURSION_H
#define RECURSION_H

// Task 1
int sum_digits(int n);
void reverse_string(char *s, int left, int right);
int is_sorted(int arr[], int n);
int gcd(int a, int b);

// Task 2
int fib_naive(int n);
int fib_memo(int n, int memo[]);
int count_paths(int n, int m);
void generate_subsets(int n, int current, int index);

#endif

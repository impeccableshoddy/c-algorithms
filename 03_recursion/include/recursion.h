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

// Task 3
unsigned long long factorial_recursive(int n);
unsigned long long factorial_tail_helper(int n, unsigned long long acc);
unsigned long long factorial_tail(int n);
int sum_array_recursive(int arr[], int n);
int sum_array_tail_helper(int arr[], int n, int acc);
int sum_array_tail(int arr[], int n);
long long power_recursive(int base, int exp);
long long power_tail_helper(int base, int exp, long long acc);
long long power_tail(int base, int exp);

// Task 4
void hanoi(int n, char from, char to, char aux);
int hanoi_count(int n);
int tail_hanoi_count_helper(int n, int acc);
int tail_hanoi_count(int n);

// Task 5
int climb_naive(int n);
int climb_memo(int n, int memo[]);
int min_coins_naive(int coins[], int k, int amount);
int min_coins_memo(int coins[], int k, int amount, int memo[]);
int lis_naive(int arr[], int n, int prev_index, int curr_index);
int lis_memo(int arr[], int n, int prev_index, int curr_index, int memo[][n]);

#endif

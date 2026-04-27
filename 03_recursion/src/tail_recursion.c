#include "recursion.h"

/*
 * Ordinary recursion
 * The function multiplies after the recursive call returns.
 * The system must keep a frame on the stack to remember operation
 *
 * Tail recursion
 * after each recursive call, stack is free as there is no pending operation
 * which the function has to perform after the recursion
 *
 * Modern compilers can perform Tail Call Optimization (TCO)
 * since the recursive call is the final operation, the compiler can just
 * overwrite the current frame on the stack with the new arguments of the next call
 * effectively turning the recursive function into a while loop
 * */

// Time: O(n)
// Space: O(n)
// Recurrence: T(n) = T(n - 1) + O(1)
unsigned long long factorial_recursive(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial_recursive(n - 1);
}

// Time: O(n)
// Space: O(1) with TCO, O(n) without
// Recurrence: T(n) = T(n - 1) + O(1)
unsigned long long factorial_tail_helper(int n, unsigned long long acc) {
    if (n == 0) {
        return acc;
    }
    return factorial_tail_helper(n - 1, acc * n);
}

//
// Wrapper for factorial_tail
//
unsigned long long factorial_tail(int n) {
    unsigned long long acc = 1;
    return factorial_tail_helper(n, acc);
}

// Time: O(n)
// Space: O(n)
// Recurrence: T(n) = T(n - 1) + O(1)
int sum_array_recursive(int arr[], int n) {
    if (n == 0) {
        return 0;
    }
    return arr[n - 1] + sum_array_recursive(arr, n - 1);
}

// Time: O(n)
// Space: O(1) with TCO, O(n) without
// Recurrence: T(n) = T(n - 1) + O(1)
int sum_array_tail_helper(int arr[], int n, int acc) {
    if (n == 0) {
        return acc;
    }
    return sum_array_tail_helper(arr, n - 1, acc + arr[n - 1]);
}

// Wrapper for sum_array_tail
int sum_array_tail(int arr[], int n) {
    int acc = 0;
    return sum_array_tail_helper(arr, n, acc);
}

// Time: O(n)
// Space: O(n)
// Recurrence: T(n) = T(n - 1) + O(1)
long long power_recursive(int base, int exp) {
    if (exp == 0)
        return 1;
    return base * power_recursive(base, exp - 1);
}

// Time: O(n)
// Space: O(1) with TCO, O(n) without
// Recurrence: T(n) = T(n - 1) + O(1)
long long power_tail_helper(int base, int exp, long long acc) {
    if (exp == 0)
        return acc;
    return power_tail_helper(base, exp - 1, acc * base);
}

// Wrapper for power_tail
long long power_tail(int base, int exp) {
    long long acc = 1;
    return power_tail_helper(base, exp, acc);
}

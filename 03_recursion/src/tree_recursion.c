#include "recursion.h"
#include <stdio.h>

/*
 * Task 2a - Fibonacci naive
 * Time: O(2^n)
 * Space: O(n)
 * Recurrence: T(n) = T(n-1) + T(n-2) + O(1)
 * */
int fib_naive(int n) {
    if (n <= 1) {
        return n;
    }
    return fib_naive(n - 1) + fib_naive(n - 2);
}

/*
 * Task 2a - Fibonacci memoized
 * Time: O(n)
 * Space: O(n)
 * Recurrence: T(n) = T(n-1) + O(1)
 * */
int fib_memo(int n, int memo[]) {
    if (n <= 1) {
        return n;
    }
    if (memo[n] != 0) {
        return memo[n];
    }
    int result = fib_memo(n - 1, memo) + fib_memo(n - 2, memo);
    memo[n]    = result;
    return result;
}

/*
 * Task 2b - Count paths
 * Time: O(2^(n+m))
 * Space: O(n+m)
 * Recurrence: T(n,m) = T(n-1, m) + T(n, m-1) + O(1)
 * */
static int count_helper(int row, int col, int n, int m) {
    if (row == n - 1 && col == m - 1) {
        return 1;
    }
    if (row >= n || col >= m) {
        return 0;
    }
    return count_helper(row + 1, col, n, m) + count_helper(row, col + 1, n, m);
}

int count_paths(int n, int m) {
    return count_helper(0, 0, n, m);
}

/*
 * Task 2c - Generate all subsets
 * Time: O(2^n)
 * Space: O(n)
 * Recurrence: T(k) = 2T(k-1) + O(1) where k = n - index
 * */
void generate_subsets(int n, int current, int index) {
    if (index == n) {
        printf("%d\n", current);
        return;
    }
    generate_subsets(n, current, index + 1);
    generate_subsets(n, current | (1 << index), index + 1);
}

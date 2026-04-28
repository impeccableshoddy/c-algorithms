#include "recursion.h"

#define MAX(a, b) (((a) > (b)) ? (a) : (b))

// Time: O(2^n)
// Space: O(n)
// Recurrence: T(n) = 2T(n-1) + O(1)
int climb_naive(int n) {
    if (n <= 1) {
        return 1;
    }
    return climb_naive(n - 1) + climb_naive(n - 2);
}

// Time: O(n)
// Space: O(n)
// Recurrence: T(n) = T(n-1) + O(1)
// Memoization reduces Time from O(2^n) to O(n) by caching repeated subproblems
int climb_memo(int n, int memo[]) {
    if (n <= 1) {
        return 1;
    }
    if (memo[n] > 0) {
        return memo[n];
    }
    int result = climb_memo(n - 1, memo) + climb_memo(n - 2, memo);
    memo[n]    = result;
    return result;
}

// Time: O(k^(A / coin_value))
// Space: O(A)
// Recurrence: T(A) = kT(A - coin_value) + O(k), where A is amount, k is no. of coin denominations
int min_coins_naive(int coins[], int k, int amount) {
    if (amount == 0) {
        return 0;
    }
    if (amount < 0) {
        return -1;
    }
    int best_total = -1;
    for (int i = 0; i < k; i++) {
        int result = min_coins_naive(coins, k, amount - coins[i]);

        if (result != -1) {
            if (best_total == -1 || result + 1 < best_total) {
                best_total = result + 1;
            }
        }
    }
    return best_total;
}

// Time: O(A * k)
// Space: O(A)
// Recurrence: T(A) = T(A - coin_value) + O(k), where A is amount
// and k is number of coin denominations
// Memoization reduces Time from O(k^(A / coin_value)) to O(A * k) by caching repeated subproblems
int min_coins_memo(int coins[], int k, int amount, int memo[]) {
    if (amount == 0) {
        return 0;
    }
    if (amount < 0) {
        return -1;
    }
    if (memo[amount] != 0) {
        return memo[amount];
    }

    int best_total = -1;

    for (int i = 0; i < k; i++) {
        int result = min_coins_memo(coins, k, amount - coins[i], memo);

        if (result != -1) {
            if (best_total == -1 || result + 1 < best_total) {
                best_total = result + 1;
            }
        }
    }

    memo[amount] = best_total;

    return best_total;
}

// Time: O(2^n)
// Space: O(n)
// Recurrence: T(n) = 2T(n - 1) + O(1)
int lis_naive(int arr[], int n, int prev_index, int curr_index) {
    if (curr_index == n) {
        return 0;
    }

    int skip = lis_naive(arr, n, prev_index, curr_index + 1);

    int take = 0;
    if (prev_index == -1 || arr[curr_index] > arr[prev_index]) {
        take = 1 + lis_naive(arr, n, curr_index, curr_index + 1);
    }
    return MAX(skip, take);
}

// Time: O(n^2)
// Space: O(n^2)
// State Space
// States: S(prev, curr) where -1 <= prev <= n and 0 <= curr <= n
// Transitions: Each state depends on two others
// (prev, curr + 1) and (curr, curr + 1)
// Memoization reduces Time from O(2^n) to O(n^2) by caching repeated subproblems
int lis_memo(int arr[], int n, int prev_index, int curr_index, int (*memo)[n]) {
    if (curr_index == n) {
        return 0;
    }
    if (memo[prev_index + 1][curr_index] != -1) {
        return memo[prev_index + 1][curr_index];
    }

    int skip = lis_memo(arr, n, prev_index, curr_index + 1, memo);

    int take = 0;
    if (prev_index == -1 || arr[curr_index] > arr[prev_index]) {
        take = 1 + lis_memo(arr, n, curr_index, curr_index + 1, memo);
    }

    memo[prev_index + 1][curr_index] = MAX(skip, take);
    return memo[prev_index + 1][curr_index];
}

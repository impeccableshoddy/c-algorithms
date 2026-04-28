#include "recursion.h"
#include <assert.h>
#include <string.h>

void test_climbing() {
    int memo[11] = { 0 };
    // Standard cases
    assert(climb_naive(3) == 3);
    assert(climb_memo(10, memo) == 89);
    // Base cases
    assert(climb_naive(0) == 1);
    assert(climb_naive(1) == 1);
}

void test_coins() {
    int coins[] = { 1, 2, 5 };
    int k       = 3;
    int memo[12];

    // Standard cases
    assert(min_coins_naive(coins, k, 11) == 3); // 5+5+1
    memset(memo, 0, sizeof(memo));
    assert(min_coins_memo(coins, k, 11, memo) == 3);

    // Edge/Impossible cases
    int coins2[] = { 2 };
    assert(min_coins_naive(coins2, 1, 3) == -1);
    assert(min_coins_naive(coins2, 1, 0) == 0);
}

void test_lis() {
    int arr[] = { 10, 9, 2, 5, 3, 7, 101, 18 };
    int n     = 8;
    int memo[9][8];

    // Standard LIS
    assert(lis_naive(arr, n, -1, 0) == 4); // 2, 3, 7, 18 or 101

    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 8; j++)
            memo[i][j] = -1;
    assert(lis_memo(arr, n, -1, 0, memo) == 4);

    // Single element / Sorted / Reverse
    int arr2[] = { 5, 4, 3, 2, 1 };
    assert(lis_naive(arr2, 5, -1, 0) == 1);

    int arr3[] = { 1, 2, 3, 4, 5 };
    assert(lis_naive(arr3, 5, -1, 0) == 5);
}

int main() {
    test_climbing();
    test_coins();
    test_lis();

    return 0;
}

#include "recursion.h"
#include <assert.h>

int main(void) {
    int n = 4, base = 2, arr[4] = { 1, 2, 3, 4 };

    // 3a
    assert(factorial_recursive(n) == 24);
    assert(factorial_tail(n) == 24);

    // 3b
    assert(sum_array_recursive(arr, n) == 10);
    assert(sum_array_tail(arr, n) == 10);

    // 3c
    assert(power_recursive(base, n) == 16);
    assert(power_tail(base, n) == 16);

    return 0;
}

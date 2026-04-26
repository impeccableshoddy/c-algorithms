#include "recursion.h"
#include <assert.h>

int main(void) {
    int memo[50] = { 0 }, test_n = 5;

    // 2a - naive
    assert(fib_naive(test_n) == 5);
    // 2a - memoized
    assert(fib_memo(test_n, memo) == 5);
    // 2b
    assert(count_paths(test_n, test_n) == 70);
    // 2c
    generate_subsets(test_n, 0, 0);

    return 0;
}

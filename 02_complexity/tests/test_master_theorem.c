#include "complexity.h"
#include <stdio.h>

int main(void) {
    int n = 4;

    // Case 1: T(n) = 2T(n/2) + 1 -> O(n)
    // Expected: log n levels of calls, (For n=4, expect 3 dots)
    printf("--- Case 1: O(n) ---\n");
    case_1(n);
    printf("\n\n");

    // Case 2: T(n) = 2T(n/2) + n -> O(n log n)
    // Expected: n dots at every level of depth (log n levels)
    printf("--- Case 2: O(n log n) ---\n");
    case_2(n);
    printf("\n\n");

    // Case 3: T(n) = 2T(n/2) + n^2 -> O(n^2)
    // Expected: The n^2 work at the top level to dominate
    printf("--- Case 3: O(n^2) ---\n");
    case_3(n);
    printf("\n\n");

    return 0;
}

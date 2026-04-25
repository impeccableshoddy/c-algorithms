#include "complexity.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // 1. Copy Array & Malloc Check
    int n          = 5;
    int original[] = { 10, 20, 30, 40, 50 };
    int *copy      = copy_array(original, n);

    if (copy != NULL) {
        // Expected: "10 30 50"
        printf("Copy Success: %d %d %d\n", copy[0], copy[2], copy[4]);
        free(copy);
    } else {
        printf("Copy Failed: Malloc error\n");
    }

    // 2. Factorial Recursive (Expected: 5! = 120)
    int fact_n = 5;
    printf("Factorial %d! : %d\n", fact_n, factorial_recursive(fact_n));

    // 3. Binary Search
    int sorted[] = { 1, 3, 5, 7, 9, 11 };
    int size     = 6;
    int target   = 7;
    int result   = binary_search_recursive(sorted, 0, size - 1, target);

    // Expected: Index 3
    if (result != -1)
        printf("Binary Search: Found %d at index %d\n", target, result);
    else
        printf("Binary Search: %d not found\n", target);

    return 0;
}

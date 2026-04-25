#include "complexity.h"
#include <stdio.h>

void print_arr(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(void) {
    int n     = 6;
    int arr[] = { 12, 3, 5, 7, 19, 1 };

    // 1. Sum (Expected: 47)
    printf("Sum: %d\n", find_sum(arr, n));

    // 2. Max Pair (Expected: 31)
    printf("Max Pair Sum: %d\n", find_max_pair_sum(arr, n));

    // 3. Merge Sort (Expected: 1 3 5 7 12 19)
    printf("Before: ");
    print_arr(arr, n);
    merge_sort(arr, 0, n - 1);
    printf("After:  ");
    print_arr(arr, n);

    // 4. Subsets (Expected: n=3 -> 8)
    int sub_n = 3;
    printf("Subsets (n=%d): %d\n", sub_n, count_subsets(sub_n));

    return 0;
}

#include "complexity.h"
#include <stdio.h>

void print_arr(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(void) {
    // 1. Count Bits (Expected: 7 is 111 in binary -> 3)
    int bit_n = 7;
    printf("Bits in %d: %d\n", bit_n, count_bits(bit_n));

    // 2. Sum All Pairs (Expected: 2 * n * sum)
    // For {1, 2, 3}, sum=6, n=3. Expected: 2 * 3 * 6 = 36
    int pair_arr[] = { 1, 2, 3 };
    int pair_n     = 3;
    printf("Sum All Pairs: %d\n", sum_all_pairs(pair_arr, pair_n));

    // 3. Merge Sort Labelled
    int sort_arr[] = { 10, -1, 4, 0, 2 };
    int sort_n     = 5;
    printf("Before Sort: ");
    print_arr(sort_arr, sort_n);
    merge_sort_labelled(sort_arr, 0, sort_n - 1);
    printf("After Sort:  ");
    print_arr(sort_arr, sort_n);

    return 0;
}

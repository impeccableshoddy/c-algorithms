#include "complexity.h"
#include <stdlib.h>

int *copy_array(int arr[], int n) {
    // Time: O(n)
    // Space: O(n)
    int *ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
        return NULL;

    for (int i = 0; i < n; i++) {
        ptr[i] = arr[i];
    }
    return ptr;
}

int factorial_recursive(int n) {
    // Time: O(n)
    // Space: O(n)
    // Recurrence: T(n) = T(n-1) + O( 1 )
    if (n == 0)
        return 1;
    return n * factorial_recursive(n - 1);
}

int binary_search_recursive(int arr[], int left, int right, int target) {
    // Time: O(log n)
    // Space: O(log n)
    // Recurrence: T(n) = T(n / 2) + O( 1 )
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
        return mid;
    else if (target > arr[mid]) {
        return binary_search_recursive(arr, mid + 1, right, target);
    } else {
        return binary_search_recursive(arr, left, mid - 1, target);
    }
}

#include "complexity.h"

int count_bits(int n) {
    // Recurrence: T(n) = T(n/2) + O(1) -> O(log n)
    if (n == 0)
        return 0;
    return (n & 1) + count_bits(n >> 1);
}

void merge_labelled(int arr[], int left, int mid, int right) {
    // Time: O(n)
    // Space: O(n)
    int result[right - left + 1];     // Space: O(n)
    int i = left, j = mid + 1, k = 0; // Space: O(1)
    // Time: O(n)
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            result[k++] = arr[i++]; // Time: O(1)
        } else {
            result[k++] = arr[j++]; // Time: O(1)
        }
    }
    // Time: O(n)
    while (i <= mid) {
        result[k++] = arr[i++]; // Time: O(1)
    }
    // Time: O(n)
    while (j <= right) {
        result[k++] = arr[j++]; // Time: O(1)
    }
    // Time: O(n)
    // Space: O(1)
    for (int n = 0, m = left; n < (right - left + 1); m++, n++) {
        arr[m] = result[n]; // Time: O(1)
    }
}

void merge_sort_labelled(int arr[], int left, int right) {
    // Time: O(n log n)
    // Space: O(n)
    // Recurrence: T(n) = 2T(n / 2) + n
    if (left >= right)                        // Time: O(1)
        return;                               // Time: O(1)
    int mid = left + (right - left) / 2;      // Space: O(1)
    merge_sort_labelled(arr, left, mid);      // T(n) = T(n/2)
    merge_sort_labelled(arr, mid + 1, right); // T(n) = T(n/2)
    merge_labelled(arr, left, mid, right);    // O(n)
}

int sum_all_pairs(int arr[], int n) {
    // Time: O(n^2)
    // Space: O(n)
    // Recurrence: T(n) = T(n - 1) + n
    if (n == 0)
        return 0;
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i] + arr[n - 1];
    }
    return sum + sum_all_pairs(arr, n - 1);
}

int count_subsets_labelled(int n) {
    // Time: O(2^n)
    // Space: O(n)
    // Recurrence: T(n) = 2T(n - 1) + O(1)
    if (n == 0) // O(1)
        return 1;
    return count_subsets_labelled(n - 1) + count_subsets_labelled(n - 1);
}

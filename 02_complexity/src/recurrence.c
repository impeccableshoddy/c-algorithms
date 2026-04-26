#include "complexity.h"

int count_bits(int n) {
    // Time: O(log n)
    // Space: O(1)
    int count = 0;
    while (n > 0) {
        count += (n & 1);
        n >>= 1;
    }
    return count;
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
    // Time: O(n)
    // Space: O(1)
    int sum_of_elements = 0; // Space: 0(1)
    // Time: O(n)
    // Space: O(1)
    for (int i = 0; i < n; i++) {
        sum_of_elements += arr[i]; // Time: O(1)
    }
    return 2 * n * sum_of_elements;
}

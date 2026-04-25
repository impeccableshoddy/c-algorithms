#include "complexity.h"

int find_sum(int arr[], int n) {
    // Time: O(n)
    // Space: O(1)
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int find_max_pair_sum(int arr[], int n) {
    // Time: O(n^2)
    // Space: O(1)
    int max = arr[0] + arr[1];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] > max) {
                max = arr[i] + arr[j];
            }
        }
    }

    return max;
}

void merge(int arr[], int left, int mid, int right) {
    // Time: O(n)
    // Space: O(n)
    int result[right - left + 1];
    int i = left, j = mid + 1, k = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            result[k++] = arr[i++];
        } else {
            result[k++] = arr[j++];
        }
    }

    while (i <= mid) {
        result[k++] = arr[i++];
    }

    while (j <= right) {
        result[k++] = arr[j++];
    }

    for (int i = left, j = 0; j < (right - left + 1); i++, j++) {
        arr[i] = result[j];
    }
}

void merge_sort(int arr[], int left, int right) {
    // Time: O(n log n)
    // Space: O(n)
    // Recurrence: T(n) = 2T(n/2) + n
    if (left >= right)
        return;
    int mid = left + (right - left) / 2;
    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int count_subsets(int n) {
    // Time: O(2^n)
    // Space: O(n)
    // Recurrence: T(n) = 2T(n - 1) + 1
    if (n == 0)
        return 1;
    return count_subsets(n - 1) + count_subsets(n - 1);
}

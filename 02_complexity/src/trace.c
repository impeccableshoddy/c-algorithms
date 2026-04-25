#include "complexity.h"
#include <stdio.h>

int trace_1a(int arr[]) {
    // Time: O(1)
    // Space: O(1)
    return arr[4];
}

void trace_1b(int arr[], int n) {
    // Time: O(n)
    // Space: O(1)
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}

void trace_1c(int n, int arr[][n]) {
    // Time: O(n^2)
    // Space: O(1)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\n", arr[i][j]);
        }
    }
}

void trace_1d(int arr[], int n) {
    // Time: O(n)
    // Space: O(1)
    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
}

void trace_1e(int n) {
    // Time: O(log n)
    // Space: O(1)
    int i = n;
    while (i > 1) {
        printf("%d\n", i);
        i /= 2;
    }
}

int trace_1f(int arr[], int n, int target) {
    // Time: O(log n)
    // Space: O(1)
    int start = 0;
    int end   = n - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (target < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

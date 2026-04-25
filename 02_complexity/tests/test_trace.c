#include "complexity.h"

int main(void) {

    int n = 4;
    int arr[4] = { 1, 2, 3, 4 };
    // clang-format off
    int arr2[4][4] = { 
        { 1, 2, 3, 4 }, 
        { 5, 6, 7, 8 }, 
        { 9, 10, 11, 12 }, 
        { 13, 14, 15, 16 } 
    };
    // clang-format on

    trace_1a(arr);
    trace_1b(arr, n);
    trace_1c(n, arr2);
    trace_1d(arr, n);
    trace_1e(n);
    trace_1f(arr, n, 3);

    return 0;
}

#include "complexity.h"
#include <stdio.h>

// Recurrence: T(n) = 2T(n/2) + n
// a = 2, b = 2, c = log_b(a) = log_2(2) = 1, f(n) = n
// n^c = n^1 = n
// f(n) = n grows at same rate as n^c
// Case 2 applies
// Result: T(n) = θ(n log n)
void case_2(int n) {
    if (n <= 1)
        return;
    for (int i = 0; i < n; i++) {
        printf(".");
    }
    case_2(n / 2);
    case_2(n - n / 2);
}

// Recurrence: T(n) = 2T(n/2) + n^2
// a = 2, b = 2, c = log_b(a) = log_2(2) = 1, f(n) = n^2
// n^c = n^1 = n
// f(n) = n^2 grows faster than n^c
// Case 3 applies
// Result: T(n) = θ(f(n)) = θ(n^2)
void case_3(int n) {
    if (n <= 1)
        return;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf(".");
        }
    }
    case_3(n / 2);
    case_3(n - n / 2);
}

// Recurrence: T(n) = 2T(n/2) + 1
// a = 2, b = 2, c = log_b(a) = log_2(2) = 1, f(n) = 1
// n^c = n^1 = n
// f(n) = 1 grows slower than n^c
// Case 1 applies
// Result: T(n) = θ(n^c) = θ(n)
void case_1(int n) {
    if (n <= 1)
        return;
    printf(".");
    case_1(n / 2);
    case_1(n - n / 2);
}

#include "recursion.h"
#include <stdio.h>

// Time: O(2^n)
// Space: O(n)
// Recurrence: T(n) = 2T(n - 1) + O(1)
void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("Move disk %d from %c to %c\n", n, from, to);
        return;
    }
    hanoi(n - 1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    hanoi(n - 1, aux, to, from);
}

// Time: O(n)
// Space: O(n)
// Recurrence: T(n) = T(n - 1) + O(1)
int hanoi_count(int n) {
    if (n == 1)
        return 1;
    return 2 * hanoi_count(n - 1) + 1;
}

// Time: O(n)
// Space: O(1) with TCO, O(n) without
// Recurrence: T(n) = T(n - 1) + O(1)
int tail_hanoi_count_helper(int n, int acc) {
    if (n == 0)
        return acc;
    return tail_hanoi_count_helper(n - 1, 2 * acc + 1);
}

// Wrapper for tail_hanoi_count
int tail_hanoi_count(int n) {
    int acc = 0;
    return tail_hanoi_count_helper(n, acc);
}

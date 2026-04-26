#include "complexity.h"

/*
 * Best Case Implementation
 * Scenario: The target is at the very first index
 * O: O(1) — upper bound in this scenario
 * Ω: Ω(1) — lower bound in this scenario
 * Θ: Θ(1) — tight bound: always exactly 1 step
 */
int search_best_case(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

/*
 * Worst Case Implementation
 * Scenario: The target is at the very last index
 * O: O(n) — upper bound
 * Ω: Ω(n) — lower bound
 * Θ: Θ(n) — tight bound: always exactly n step
 */
int search_worst_case(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

/*
 * Average Case Implementation
 * Scenario: The target is at the somewhere around the middle index
 * O: O(n) — upper bound (could be last)
 * Ω: Ω(n) — lower bound (could be first)
 * Θ: Θ(n/2) = Θ(n) — tight bound on average
 */
int search_average_case(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

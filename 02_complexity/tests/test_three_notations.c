#include "complexity.h"
#include <stdio.h>

int main(void) {
    int arr[] = { 1, 3, 5, 6, 9 };
    int n     = 5;

    // Expected: index = 0
    printf("Best Case Scenario: %d\n", search_best_case(arr, n, 1));

    // Expected: index = 4
    printf("Worst Case Scenario: %d\n", search_worst_case(arr, n, 9));

    // Expected: index = 2
    printf("Average Case Scenario: %d\n", search_average_case(arr, n, 5));

    return 0;
}

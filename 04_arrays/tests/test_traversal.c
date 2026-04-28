#include "arrays.h"
#include <assert.h>
#include <stdio.h>

void test_find_extremes(void) {
    int arr[] = { 1, 5, 3, 9, 2 };
    int n     = 5;
    assert(find_max(arr, n) == 9);
    assert(find_min(arr, n) == 1);
}

void test_searching(void) {
    int arr[] = { 10, 20, 30, 40 };
    int n     = 4;
    assert(linear_search(arr, n, 30) == 2);
    assert(linear_search(arr, n, 99) == -1);
    assert(binary_search(arr, n, 30) == 2);
    assert(binary_search(arr, n, 99) == -1);
}

void test_modifications(void) {
    int arr[] = { 1, 2, 3 };
    int n     = 3;
    reverse_array(arr, n);
    assert(arr[0] == 3 && arr[1] == 2 && arr[2] == 1);
}

int main(void) {

    printf("test_find_extremes - ");
    test_find_extremes();
    printf("Ok\n");
    printf("test_searching - ");
    test_searching();
    printf("Ok\n");
    printf("test_modifications - ");
    test_modifications();
    printf("Ok\n");

    return 0;
}

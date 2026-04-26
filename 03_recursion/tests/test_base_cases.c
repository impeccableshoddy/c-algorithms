#include "recursion.h"
#include <assert.h>
#include <string.h>

int main() {
    // 1a
    assert(sum_digits(123) == 6);

    // 1b
    char s[] = "hello";
    reverse_string(s, 0, strlen(s) - 1);
    assert(strcmp(s, "olleh") == 0);

    // 1c
    int arr[] = { 1, 2, 3 };
    assert(is_sorted(arr, 3) == 1);

    // 1d
    assert(gcd(48, 18) == 6);

    return 0;
}

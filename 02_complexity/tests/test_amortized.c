#include "complexity.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    DynamicArray da = { 0 };
    da_push(&da, 10);
    da_push(&da, 20);
    da_push(&da, 30);
    da_push(&da, 40);
    // Expected: 10 20 30 40
    for (int i = 0; i < da.size; i++) {
        printf("%d ", da.data[i]);
    }
    free(da.data);
    return 0;
}

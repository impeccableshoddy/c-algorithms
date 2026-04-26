#include "complexity.h"
#include <stdlib.h>

/*
 * Amortized Analysis
 * - Each push is O(1) average time.
 * - When array is full, resizing takes O(n), but happens rarely.
 * - Doubling space ensures that over n pushes, total cost is O(n),
 *   so average per push is O(1)*/
void da_push(DynamicArray *da, int value) {
    if (da->size == da->capacity) {
        int new_capacity = da->capacity == 0 ? 1 : da->capacity * 2;
        int *temp        = (int *)realloc(da->data, new_capacity * (sizeof(int)));
        if (temp == NULL)
            return;
        else
            da->data = temp;
        da->capacity = new_capacity;
    }
    da->data[da->size++] = value;
}

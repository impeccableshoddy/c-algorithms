#include "hello.h"

void swap(char *a, char *b) {
    char temp = *a;
    *a        = *b;
    *b        = temp;
}

void reverse_string(char *str, int start, int end) {
    if (start >= end) {
        return;
    }
    swap(&str[start], &str[end]);
    reverse_string(str, ++start, --end);
}

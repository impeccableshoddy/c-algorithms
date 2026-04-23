// Counts the no. of vowels in a given string;

#include "hello.h"

int count_vowels(const char *str) {
    int count     = 0;
    char vowels[] = "AEIOUaeiou";
    const char *p = str;
    char *c       = vowels;

    while (*p) {
        c = vowels;
        while (*c) {
            if (*p == *c)
                count++;
            c++;
        }
        p++;
    }

    return count;
}

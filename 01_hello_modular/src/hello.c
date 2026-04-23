// Implements declared functions via calling "hello.h";

#include "hello.h"
#include <stdio.h>

void hello_print(const char *name) {
    printf("Hello, %s!\n", name);
}


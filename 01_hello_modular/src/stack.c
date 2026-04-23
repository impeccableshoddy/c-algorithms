// Stack Implementation to initialize, push, pop and check if empty

#include "hello.h"
#include <stdio.h>

Stack stack_init(void) {
    Stack s = {{0}, -1};
    return s;
}

void stack_push(Stack *s, int value) {
    if (s->top >= (int)((sizeof(s->data) / sizeof(s->data[0])) - 1)) {
        printf("Stack full cannot push\n");
        return;
    }
    s->data[++s->top] = value;
}

int stack_pop(Stack *s) {
    if (s->top == -1) {
        printf("Stack empty cannot push.\n");
        return -1;
    }
    return s->data[s->top--];
}

int stack_is_empty(Stack *s) {
    if (s->top == -1) {
        return 1;
    } else {
        return 0;
    }
}

// only job is initialize stuff and declare functions to let the other files know what's available
// for use

#ifndef HELLO_H
#define HELLO_H

typedef struct {
    int data[64];
    int top;
} Stack;

typedef struct {
    int data[64];
    int first;
    int last;
} Queue;

void hello_print(const char *name);
int count_vowels(const char *str);
Stack stack_init(void);
void stack_push(Stack *s, int value);
int stack_pop(Stack *s);
int stack_is_empty(Stack *s);
void reverse_string(char *str, int start, int end);
Queue queue_init(void);
void enqueue(Queue *q, int value);
int queue_is_empty(Queue *q);
int dequeue(Queue *q);

#endif

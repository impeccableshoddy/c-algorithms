// Uses fixed array for simplicity to implement a basic queue algorithm
#include "hello.h"
#include <stdio.h>

Queue queue_init(void) {
    Queue q = {{0}, 0, 0};
    return q;
}

void enqueue(Queue *q, int value) {
    if (q->last >= (int)((sizeof(q->data) / sizeof(q->data[0])) - 1)) {
        printf("Queue full.\n");
        return;
    }
    q->data[q->last++] = value;
}

int queue_is_empty(Queue *q) {
    if (q->first >= q->last) {
        return 1;
    } else {
        return 0;
    }
}

int dequeue(Queue *q) {
    if (queue_is_empty(q)) {
        printf("Queue is empty!\n");
        return 0;
    }
    return q->data[q->first++];
}

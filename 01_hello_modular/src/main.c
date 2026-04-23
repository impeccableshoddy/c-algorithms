/* Only calls functions and uses them in context.
 * The other concerns have been separated in individual files to increase code readability and
 * modularity. header "hello.h" is called to know which function is available and then use it. */

#include "hello.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char name[64];
    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            hello_print(argv[i]);

            // test count_vowels
            printf("%d\n", count_vowels(argv[i]));

            // recursion test
            int len = 0;
            while (argv[i][len] != '\0') {
                len++;
            }
            reverse_string(argv[i], 0, len - 1);
            hello_print(argv[i]);
        }
    } else {
        printf("Enter your name: ");
        if (fgets(name, sizeof(name), stdin) != NULL) {
            name[strcspn(name, "\n")] = '\0';
        }

        hello_print(name);

        // test count_vowels
        printf("%d\n", count_vowels(name));

        // recursion test
        int len = 0;
        while (name[len] != '\0') {
            len++;
        }
        reverse_string(name, 0, len - 1);
        hello_print(name);
    }

    // Stack test
    Stack s = stack_init();
    stack_push(&s, 10);
    stack_push(&s, 20);
    stack_push(&s, 30);
    printf("%d\n", stack_pop(&s));
    printf("%d\n", stack_pop(&s));
    printf("%d\n", stack_is_empty(&s));

    // Queue test
    Queue q = queue_init();
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    printf("%d\n", dequeue(&q));
    printf("%d\n", dequeue(&q));
    printf("%d\n", queue_is_empty(&q));

    return 0;
}

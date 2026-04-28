#include "arrays.h"
#include <stdio.h>
#include <sys/ioctl.h> // Linux/macOS only
#include <unistd.h>    // Linux/macOS only

/*
 * Not using "\e" shorthand escape (less portability)
 * "\033[31m" is equivalent but just looks ugly
 * "\x1b[31m" hexadecimal for ASCII 27
 * "\033[31m" octal for ASCII 27
 * syntax "\x1b[<code>m", '[' being the the start of control sequence
 * and 'm' being the end of sequence
 */
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define RESET "\x1b[0m"

typedef struct {
    int run;
    int passed;
} State;

static State tests = { 0, 0 };

#define expect(condition, msg)                                                                     \
    do {                                                                                           \
        tests.run++;                                                                               \
        if (condition) {                                                                           \
            tests.passed++;                                                                        \
            printf("    " GREEN "PASS" RESET "  %s\n", msg);                                       \
        } else {                                                                                   \
            printf("    " RED "FAIL" RESET "  %s", msg);                                           \
            printf(" at %s:%d\n", __FILE__, __LINE__);                                             \
        }                                                                                          \
    } while (0)

static void run(const char *name, void (*fn)(void)) {
    printf("\n%s\n", name);
    fn();
}

static void test_find_extremes(void) {
    int arr[] = { 1, 5, 3, 9, 2 };
    int n     = 5;
    expect(find_min(arr, n) == 1, "find_min returns smallest element");
    expect(find_max(arr, n) == 9, "find_max returns largest element");
}

static void test_searching(void) {
    int arr[] = { 10, 20, 30, 40 };
    int n     = 4;
    expect(linear_search(arr, n, 30) == 2, "linear_search finds existing element");
    expect(linear_search(arr, n, 99) == -1, "linear_search returns -1 when missing");
    expect(binary_search(arr, n, 30) == 2, "binary_search finds existing element");
    expect(binary_search(arr, n, 99) == -1, "binary_search returns -1 when missing");
}

static void test_modifications(void) {
    int arr[] = { 1, 2, 3 };
    int n     = 3;
    reverse_array(arr, n);
    expect(arr[0] == 3 && arr[1] == 2 && arr[2] == 1, "reverse_array reverses in place");
}

static void print_separator(void) {
    struct winsize ws;
    if (ioctl(STDOUT_FILENO, TIOCGWINSZ, &ws) == 0) {
        for (int i = 0; i < ws.ws_col; i++) {
            putchar('-');
        }
        putchar('\n');
    }
}

static void summary(void) {
    print_separator();
    if (tests.passed == tests.run) {
        printf(GREEN "    %d/%d tests passed\n" RESET, tests.passed, tests.run);
    } else {
        printf(RED "    %d/%d tests passed\n" RESET, tests.passed, tests.run);
    }
}

int main(void) {
    run(" Find extremes", test_find_extremes);
    run(" Searching", test_searching);
    run(" Modifications", test_modifications);
    summary();
    return tests.passed == tests.run ? 0 : 1;
}

#include "recursion.h"
#include <assert.h>

int main(void) {
    int n     = 3;
    char from = 'A', to = 'C', aux = 'B';

    // 4a
    hanoi(n, from, to, aux);

    // 4b
    assert(hanoi_count(n) == 7);
    assert(tail_hanoi_count(n) == 7);

    return 0;
}

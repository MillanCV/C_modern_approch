/* comment expected result */
#include <stdio.h>

int main(void) {
    int i = 5, j;

    j = ++i * 3 - 2;
    printf("%d %d\n", i, j);                // 6 16

    i = 5;
    j = 3 - 2 * i++;
    printf("%d %d\n", i, j);                // 6 -9 MAL

    i = 7;
    j = 3 * i-- + 2;
    printf("%d %d\n", i, j);                // 6 23

    i = 7;
    j = 3 + --i * 2;
    printf("%d %d\n", i, j);                // 6 17 MAL
    return 0;
}
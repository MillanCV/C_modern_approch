/* comment expected result */
#include <stdio.h>

int main(void) {
    int i = 1, j, k;

    printf("%d\n", i++ - 1);        // 1
    printf("%d\n", i);                // 2

    i = 10;
    j = 5;
    printf("%d\n", i++ - ++j);        // 5
    printf("%d %d\n", i, j);                // 11 6

    i = 7;
    j = 8;
    k = 5;
    printf("%d\n", i++ - j++ + --k);        // 7 - 8 + 4 = 3
    printf("%d %d %d\n", i, j, k);                // 8 9 4



    
    return 0;
}
/* comment expected result */
#include <stdio.h>

int main(void) {
    int i = 7, j = 8, k;

    i *= j + 1;
    printf("%d %d\n", i, j);        // 49 9     MAL

    i = j = k = 1;
    i += j += k;
    printf("%d %d %d\n", i, j, k);  // 3 2 1

    i = 1;
    j = 2;
    k = 3;
    i -= j -= k;
    printf("%d %d %d\n", i, j, k);  // 0 -1 3   MAL

    i = 2;
    j = 1;
    k = 0;
    i *= j *= k;
    printf("%d %d %d\n", i, j, k);  // 0 0 0 
    
    return 0;
}
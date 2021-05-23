/************************************
 * valor de cada expresion en c99   *
 ************************************/

#include <stdio.h>

int main(void){
    int i = 8, j = 5;

    printf("%d %d\n", i / j);       // 1

    printf("%d %d\n", - i / j);     // -1

    printf("%d %d\n", i / -j);      // -1

    printf("%d %d\n", -i / -j);     // 1

    return 0;
}
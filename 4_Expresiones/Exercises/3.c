/************************************
 * valor de cada expresion en c89   *
 ************************************/

#include <stdio.h>

int main(void){
    int i = 8, j = 5;

    printf("%d %d\n", i / j);       // 1

    printf("%d %d\n", - i / j);     // -1 o -2

    printf("%d %d\n", i / -j);      // -1 o -2

    printf("%d %d\n", -i / -j);     // 1 o 2

    return 0;
}
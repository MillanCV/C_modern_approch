/************************************
 * valor de cada expresion en c89   *
 ************************************/

#include <stdio.h>

int main(void){
    int i = 8, j = 5;

    printf("%d\n", i % j);       //
    printf("%d\n", - i % j);     // el valor depende de la implementaci
    printf("%d\n", i % -j);      // el valor depende de la implementaci
    printf("%d\n", -i % -j);     // el valor depende de la implementacion

    return 0;
}
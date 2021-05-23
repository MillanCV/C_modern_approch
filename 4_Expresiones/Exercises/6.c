/********************************************
 * valor de cada expresion en c99           *
 * depende del signo del primer operando    *
 ********************************************/

#include <stdio.h>

int main(void){
    int i = 8, j = 5;

    printf("%d\n", i % j);       // 3

    printf("%d\n", - i % j);     // 
    printf("%d\n", i % -j);      //
    printf("%d\n", -i % -j);     // -3

    return 0;
}
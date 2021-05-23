#include <stdio.h>

int main(void){
    int i = 5, j = 3;


    printf("%d\n", (-i) / j);  // aqui el resultado segun C89 podria ser -1 o -2, en c99 seria siempre -1


    printf("%d\n", - (i / j)); // aqui el resultado segun C89 seria siempre 1

    return 0;
}
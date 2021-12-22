#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p = malloc(sizeof(int));

    *p = 3;


    printf("content of p is %d, address is %p\n", *p, p);

    return 0;
}
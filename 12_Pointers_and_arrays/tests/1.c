#include <stdio.h>

#define N 10

int main(){
    int a[] = {1, 2, 3 , 4, 5, 6, 7, 8, 9, 10}, *p;


    p = &a[0];
    while (p < &a[N])
        printf("Address: %p, Number: %d \n", p, *++p);

    return 0;
}
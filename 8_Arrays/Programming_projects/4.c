/*
 * Modify the reverse.c program of Section 8.1 to use 
 * the expression (int)(sizeof(a)/sizeof(a[0])) for
 * the array length
 */

#include <stdio.h>

#define ARRAY_LENGTH ((int)(sizeof(a)/sizeof(a[0])))
#define N 10

int main(){
    int a[N], i;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < ARRAY_LENGTH; i++) {
        scanf("%d", &a[i]);
    }

    printf("In reverse order:");
    for (i = ARRAY_LENGTH - 1; i >= 0; i--)
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}
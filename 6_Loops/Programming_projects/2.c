/****************************************************************
 * Ask for two integers and calculate greatest common divisor   *
 * **************************************************************/

#include <stdio.h>

int main(){
    int m, n, gdc;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    while(1){
        if (n == 0){
            gdc = m;
            break;
        }

        int i = m % n;
        m = n;
        n = i;
    }

    printf ("Greatest common divisor: %d\n", gdc);

    return 0;
}
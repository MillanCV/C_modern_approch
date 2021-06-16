/********************************************************
 * Asks the user to enter a fraction, then reduces the  *
 * fraction to lowest terms                             *
 ********************************************************/

#include <stdio.h>

int main() {
    int a, b, m, n, gdc;

    printf("Enter a fraction: ");
    scanf("%d/%d", &a, &b);

    m = a;
    n = b;

    while(1){
        if (n == 0){
            gdc = m;
            break;
        }

        int i = m % n;
        m = n;
        n = i;
    }

    printf("In lowest terms: %d/%d\n", a/gdc, b/gdc);

    return 0;
}
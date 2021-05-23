/********************************************************
 * Reads and integer and displays its octal             *
 ********************************************************/

#include <stdio.h>

int main(void){
    int x, a, b, c, d, e, octal = 0;

    printf("Enter a number between 0 and 32767: ");
    scanf("%5d", &x);

    a = x % 8;
    x /= 8;

    b = x % 8;
    x /= 8;

    c = x % 8;
    x /= 8;

    d = x % 8;
    x /= 8;

    e = x % 8;
    x /= 8;

    printf("In octal, your number is: %.5d\n", e * 10000 + d * 1000 + c * 100 + b *10 + a);
    

    return 0;
}
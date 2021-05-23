/****************************************************
 * asks the user to enter a two digit number, then  *
 * prints the number with its digits reversed       *
 ****************************************************/

#include <stdio.h>

int main(void) {
    int x, a, b;

    printf("Enter a two-digit number: ");
    scanf("%2d", &x);

    a = x / 10;
    b = x % 10;

    printf("The reversal is %d%d\n", b, a);

    return 0;
}
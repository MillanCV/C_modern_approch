/******************************************************
 * asks the user to enter a three digit number, then  *
 * prints the number with its digits reversed         *
 ******************************************************/

#include <stdio.h>

int main(void) {
    int x, a, b, c;

    printf("Enter a three-digit number: ");
    scanf("%3d", &x);

    a = x / 100;
    b = x / 10 % 10;
    c = x % 10;

    printf("The reversal is %d%d%d\n", c, b, a);

    return 0;
}
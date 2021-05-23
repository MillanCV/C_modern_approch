/********************************************************
 * asks the user to enter a three digit number whitout  *
 * using arithmetic and  prints the number with its     *
 * digits reversed                                      *
 ******************************************************/

#include <stdio.h>

int main(void) {
    int x;

    printf("Enter a three-digit number: ");
    scanf("%3d", &x);

    // a = x / 100;
    // b = x / 10 % 10;
    // c = x % 10;

    printf("The reversal is %d\n", ((x % 10) * 100) + ((x / 10 % 10) * 10)+ (x / 100));

    return 0;
}
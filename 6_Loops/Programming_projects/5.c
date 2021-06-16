/************************************************************
 * Generalize Project 1 from Chapter 4 son that the number  *
 * can have one, two, three, or more digits.                *
 ************************************************************/

#include <stdio.h>

int main(void) {
    int x, a, b;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Reversed number is: ");
    do {
        a = x / 10;
        
        b = x - a * 10;
        printf("%d", b);
        
        x /= 10;
        
    } while (x > 0);

    printf("\n");

    return 0;
}
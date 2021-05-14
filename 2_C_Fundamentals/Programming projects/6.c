/**********************************************************
 * Enter a dollar ammount and shows how to pay it using   *
 * 20, 10, 5 and 1 bill                                   *
 **********************************************************/

#include <stdio.h>

int main(void) {
    int x, polynomial;

    printf ("Enter a value for x: ");
    scanf("%i", &x);

    polynomial =    ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf ("Polynomial result is: %d\n", polynomial);                   

    return 0;
}
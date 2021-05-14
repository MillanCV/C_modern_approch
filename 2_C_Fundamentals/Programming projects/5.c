/**********************************************************
 * Enter a value x and compute the value of a polynomial  *
 **********************************************************/

#include <stdio.h>

int main(void) {
    int x, polynomial;

    printf ("Enter a value for x: ");
    scanf("%i", &x);

    polynomial =    (3 * x * x * x * x * x )
                    + (2 * x * x * x * x) 
                    - (5 * x * x * x) 
                    - (x * x) 
                    + (7 * x) 
                    - 6;

    printf ("Polynomial result is: %d\n", polynomial);                   

    return 0;
}
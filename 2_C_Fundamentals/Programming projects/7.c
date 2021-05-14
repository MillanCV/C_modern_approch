/**********************************************************
 * Enter a dollar ammount and shows how to pay it using   *
 * 20, 10, 5 and 1 bill                                   *
 **********************************************************/

#include <stdio.h>

int main(void) {
    int dollars, bill_20, bill_10, bill_5, bill_1;

    printf ("Enter an ammount of dollars: ");
    scanf("%d", &dollars);

    bill_20 = dollars / 20;
    dollars -= (bill_20 * 20);

    bill_10  = dollars / 10;
    dollars -= (bill_10 * 10);

    bill_5  = dollars / 5;
    dollars -= (bill_5 * 5);

    bill_1  = dollars;
    
    printf ("$20 bills: %d\n", bill_20);
    printf ("$10 bills: %d\n", bill_10);
    printf ("$5 bills: %d\n", bill_5);
    printf ("$1 bills: %d\n", bill_1);

    return 0;
}
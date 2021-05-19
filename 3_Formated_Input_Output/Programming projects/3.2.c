/************************************************************
 * Formats product information entered by the user          *
 ************************************************************/

#include <stdio.h>

int main(void) {
    int item, day, month, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &item);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchade date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\t\tUnit\t\t\tPurchase\n");
    printf("\t\t\tPrice\t\t\tDate\n");

    printf("%d\t\t\t$%7.2f\t\t%d/%d/%d\n", item, price, day, month, year);

    return 0;
}
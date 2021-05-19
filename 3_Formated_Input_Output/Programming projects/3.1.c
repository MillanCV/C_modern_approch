/************************************************************************
 *  Accepts a date from the user in form mm/dd/yyyy and then displays   *
 *  in the form yyyymmdd                                                *
 ************************************************************************/

#include <stdio.h>

int main(void) {
    int day, month, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("You entered the date %d%d%d\n", year, month, day);

    return 0;
}
/****************************************************************
 * Find the largest in a series if numbers entered by the user  *
 * When the user enters 0 or a negative number the program must *
 * display the largest nonnegative number entered               *
 ****************************************************************/

#include <stdio.h>

int main(){
    float number, largest = 0;

    while(1) {
        printf("Enter a number: ");
        scanf("%f", &number);

        if (number <= 0)
            break;

        if (number > largest)
            largest = number;
    }

    printf ("The largest number entered was %f\n", largest);

    return 0;
}
#include <stdio.h>
#include <math.h>

#define LIMIT 0.00001

int main() {
    double number, y = 1, division, avg = 2, difference;
    
    printf("Enter a positive number: ");
    scanf("%lf", &number);


    difference = fabs(y - avg);


    while (difference >= LIMIT) {
        y = avg;
        division = number / y;
        avg = (y + division) / 2;
        difference = fabs(y - avg);
    }
    
    printf("Square root: %lf\n", y);

    return 0;
}
/***********************************
 * SUMMING A SERIES OF NUMBERS                  *
 * Use long ints to avoid overflowint   *
 ***********************************/

#include <stdio.h>

int main() {
    double  n, sum = 0;

    printf("Ths program sums a series of doubles.\n");

    printf("Enter doubles (0 to terminate): ");
    scanf("%lf",&n);

    while(n != 0) {
        sum += n;
        scanf("%lf", &n);
    }

    printf("The sum is: %lf\n", sum);

    return 0;
}
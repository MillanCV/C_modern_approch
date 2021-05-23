/* Computing a UPC Check Digit */

#include <stdio.h>

int main(void) {
    int number, d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%11d", &number);

    j5 = number % 10;
    number /= 10;

    j4 = number % 10;
    number /= 10;

    j3 = number % 10;
    number /= 10;

    j2 = number % 10;
    number /= 10;

    j1 = number % 10;
    number /= 10;

    i5 = number % 10;
    number /= 10;

    i4 = number % 10;
    number /= 10;

    i3 = number % 10;
    number /= 10;

    i2 = number % 10;
    number /= 10;

    i1 = number % 10;
    number /= 10;

    d = number % 10;
    number /= 10;

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}
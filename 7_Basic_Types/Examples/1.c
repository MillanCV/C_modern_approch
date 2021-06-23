/***********************************
 * SUMMING A SERIES OF NUMBERS                  *
 * Use long ints to avoid overflowint   *
 ***********************************/

#include <stdio.h>

int main() {
    long  n, sum = 0;

    printf("Ths program sums a series of integers.\n");

    printf("Enter integers (0 to terminate): ");
    scanf("%ld",&n);

    while(n != 0) {
        sum += n;
        scanf("%ld", &n);
    }

    printf("The sum is: %ld\n", sum);

    return 0;
}
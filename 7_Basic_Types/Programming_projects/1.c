#include <stdio.h>

int main(void) {
    long int i, n;

    printf("%lu\n", sizeof(i));

    printf("This program prints a table of squares. \n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    i = 1;
    while (i <=n) {
        printf("%10ld%10ld\n", i, i * i);
        i++;
    }

    return 0;
}
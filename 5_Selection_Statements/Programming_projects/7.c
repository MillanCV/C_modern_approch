#include <stdio.h>

int main(void) {
    int a, b, c, d;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if ( a > b && a > c && a > d) // a
        printf("Largest: %d\n", a);
    else if ( b > a && b > c && b > d) // b
        printf("Largest: %d\n", b);
    else if (c > a && c > b && c > d) // c
        printf("Largest: %d\n", c);
    else // d
        printf("Largest: %d\n", d);

     if ( a < b && a < c && a < d) // a
        printf("Smallest: %d\n", a);
    else if ( b < a && b < c && b < d) // b
        printf("Smallest: %d\n", b);
    else if (c < a && c < b && c < d) // c
        printf("Smallest: %d\n", c);
    else // d
        printf("Smallest: %d\n", d);

    return 0;
}
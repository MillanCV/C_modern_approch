#include <stdio.h>

int num_digits(int n);

int num_digits(int n)
{
    int divisions = 1;
    
    n /= 10;

    if ( n == 0 )
    {
        return 1;
    }
    else {
        divisions += num_digits(n);
    }

    return divisions;
}

int main()
{
    printf("digits: %d\n", num_digits(9));
    printf("digits: %d\n", num_digits(99));
    printf("digits: %d\n", num_digits(999));
    printf("digits: %d\n", num_digits(9000));
    printf("digits: %d\n", num_digits(99999));
    printf("digits: %d\n", num_digits(999999));
    printf("digits: %d\n", num_digits(9999999));

    return 0;
}
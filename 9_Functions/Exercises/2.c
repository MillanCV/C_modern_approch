#include <stdio.h>

int check(int x, int y, int n);

int check(int x, int y, int n)
{
    if ( x >= 0 && x <= (n-1))
    {
        if ( y >= 0 && y <= (n-1))
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    printf("check(4,5,6): %d\n", check(4,5,6));
    printf("check(0,5,5): %d\n", check(0,5,5));
    printf("check(6,5,5): %d\n", check(6,5,5));

    return 0;
}
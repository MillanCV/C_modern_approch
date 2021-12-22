#include <stdio.h>

int main()
{
    int i = 3;
    int *p, *q;

    p = &i;
    q = &i;

    *p = *q;

    printf("p is %d, %p\n", *p, p);

    return 0;
}
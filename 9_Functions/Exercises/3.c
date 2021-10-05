#include <stdio.h>

int gdc(int m, int n);

int gdc(int m, int n)
{
    int result;
    while(1){
        if (n == 0){
            result = m;
            break;
        }

        int i = m % n;
        m = n;
        n = i;
    }
    return result;
}

int main()
{
    int m, n;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    printf ("Greatest common divisor: %d\n", gdc(m, n));
    return 0;
}
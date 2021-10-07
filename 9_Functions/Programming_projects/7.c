#include <stdio.h>

int power(int x, int n)
{
    int result;

    if (n == 0) return 1;

    if ((n % 2) == 0) 
    {
        result = power(x, n / 2);
        return result * result;
    }
    else
    {
        return x * power(x, n - 1);
    }
}

int main(){
    int x, n, value;

    printf("Enter a value for x: ");
    scanf("%d", &x);

    printf("Enter a value for n: ");
    scanf("%d", &n);

    value = power(x, n);
    
    printf("x elevated to n is %d\n", value);

    return 0;
}
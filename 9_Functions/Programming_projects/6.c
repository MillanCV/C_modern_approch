#include <stdio.h>

int polynomial_value(int num)
{
    int value = 0;

    value -= 6;
    value += (7 * num );
    value -= (num * num);
    value -= (5 * num * num * num);
    value += (2 * num * num * num * num);
    value += (3 * num * num * num * num * num);

    return value;
}

int main(){
    int x, value;

    printf("Enter a value for x: ");
    scanf("%d", &x);

    value = polynomial_value(x);
    
    printf("Polynomial value is %d\n", value);

    return 0;
}
#include <stdio.h>

double triangle_area(double base, double height);

double triangle_area(double base, double height)
{
    double product = base * height;
    return product / 2;
}

int main() 
{
    printf("area of triangle base 2.4 and height 4.5 is %f\n", triangle_area(2.4, 4.5));
    return 0;
}
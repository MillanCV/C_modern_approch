#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum)
{
    int;

    *sum = 0.0;
    for (i = 0; i < n; i++)
        *sum += a[i];
    *avg = *sum/n;

}

int main()
{

    return 0;
}
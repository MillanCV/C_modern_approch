#include <stdio.h>

int main() {
    int a;
    short b;
    long c;
    float d;
    double e;
    long double f;

    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(short));
    printf("%lu\n", sizeof(long));
    printf("%lu\n", sizeof(float));
    printf("%lu\n", sizeof(double));
    printf("%lu\n", sizeof(long double));

    return 0;
}
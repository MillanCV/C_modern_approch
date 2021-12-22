#include <stdio.h>

int main()
{
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &a[1], *q = &a[5];
    // p apunta al segundo elemnto
    // q apunta al sexto elemento
    // *(p+3) -> 14
    // *(q-3) -> 34
    // 4
    // true
    // false
    return 0;
}
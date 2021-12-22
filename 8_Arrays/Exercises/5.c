#include <stdio.h>

int main() {
    int fibonacci[40] = {0, 1};

    for (int i = 2; i < 40; ++i) {
        fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
    }

    for (int i = 0; i < (sizeof(fibonacci)/ sizeof(fibonacci[0])); ++i)
        printf("%d\n",fibonacci[i]);

    return 0;
}
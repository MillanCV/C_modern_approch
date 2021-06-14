#include <stdio.h>

int main(){
    int sum = 0;

    for (int i = 0; i < 10; i++){
        if (i % 2)
            continue;
        // printf("%d", i);
        sum += i;
    }
    printf ("%d\n", sum);

    return 0;
}

// 1 + 3 + 5 + 7 + 9
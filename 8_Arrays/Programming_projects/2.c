/*
 * Modify Example 8.2
 * Prints a table showing how many times each digit appears in the number
 */


#include <stdio.h>

#define N 10

int main(){
    int a[N], ocurrences[N] = {0};

    printf("Enter %d numbers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    printf("Digit:\t\t 0 1 2 3 4 5 6 7 8 9\n");
    for (int i = 0; i < N; i++) {
        ocurrences[a[i]]++;
    }
    printf("Occurrences:\t %d %d %d %d %d %d %d %d %d %d\n", ocurrences[0], 
            ocurrences[1], ocurrences[2], ocurrences[3], ocurrences[4], ocurrences[5],
            ocurrences[6], ocurrences[7], ocurrences[8], ocurrences[9]);

    return 0;
}
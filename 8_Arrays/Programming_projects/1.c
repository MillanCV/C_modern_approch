/*
 * Checks wheter any of the digits in a number appear more
 * thnan once
 */

//#include <stdbool.h> // C99 only
#include <stdio.h>

#define true 1
#define false 0
typedef int bool;

int main(){
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    printf("Repeated digit(s): ");
    while (n > 0) {
        digit = n % 10;
        n /= 10;
        if (digit_seen[digit]) {
            printf("%d ", digit);
            continue;
        }
        digit_seen[digit] = true;
        
    }

    return 0;
}
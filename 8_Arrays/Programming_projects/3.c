/*
 * Modify the repdigit.c program of section 8.1 so that the user 
 * can enter more than one number to be tested for repeated digits.
 * The program should terminate when the ysers enters a number
 * that's less or equal to 0
 */

#include <stdio.h>

#define true 1
#define false 0
typedef int bool;

int main(){
    bool digit_seen[10] = {false};
    int digit;
    long n;

    while(true) {
        printf("Enter a number: ");
        scanf("%ld", &n);

        for (int i = 0; i < 10; i++){
            digit_seen[i] = false;
        }

        if ( n <= 0) {
            printf("Number <= 0\n");
            break;
        }

        while (n > 0) {
            digit = n % 10;
            if (digit_seen[digit])
                break;
            digit_seen[digit] = true;
            n /= 10;
        }

        if (n > 0)
            printf("Repeated digit\n");
        else printf("No repeated digit\n");
    }

    return 0;
}
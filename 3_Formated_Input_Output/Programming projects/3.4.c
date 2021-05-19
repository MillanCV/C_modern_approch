/****************************************
 * Change format of telephone number    *
 ****************************************/

#include <stdio.h>

int main(void) {
    int prefix, first_number, second_number;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &prefix, &first_number, &second_number);

    printf("You entered %d.%d.%d\n", prefix, first_number, second_number);

    return 0;
}
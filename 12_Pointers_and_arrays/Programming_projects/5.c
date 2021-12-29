#include <stdio.h>

#define MAX_VALUE 100

int main(void) {

    int i = 0,
        j;
    char c, 
         terminating_char,
         words[MAX_VALUE] = {0};
    char *p = words;

    printf("Enter a sentence: ");
    while (((*p = getchar()) != '\n') && p++ < words + MAX_VALUE);

    printf("Reversal of sentence: ");
    while (p-- >= words) {
        putchar(*p);
    }
    putchar('\n');


    return 0;
}
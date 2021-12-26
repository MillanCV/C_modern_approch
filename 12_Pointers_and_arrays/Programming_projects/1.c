#include <stdio.h>

#define LEN 100

int main(){

    char message[LEN];
    char c, *p = message;

    printf("Enter a message: ");
    while (((c = getchar())!= '\n') && p < message +LEN)
        *p++ = c;

    p--;
    printf("Reversal is: ");
    
    while(p >= message)
        printf("%c", *p--);

    printf("\n");

    return 0;
}
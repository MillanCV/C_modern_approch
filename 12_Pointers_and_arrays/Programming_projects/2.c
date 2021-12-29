#include <stdio.h>
#include <ctype.h> // isalpha, toupper

#define N 100

int main(){
    char text[N];
    char *p, *q;
    int i = 0;

    printf("Enter a message: ");
    while((text[i] = getchar()) != '\n' && i++ < N);
    
    for(p = text, q = text + i - 1 ; p <= q; p++, q--){
        printf("comparando %c y %c\n", *p, *q);
        printf("adresses are %p y %p\n", p, q);
        if (*p != *q){
            printf("Not a palindrome\n");
            return 0;
        }
    }
    printf("Palindrome\n");
    
    return 0;
}
#include <stdio.h>
#include <ctype.h>

int main(){
    char c,d;

    printf("Enter a first and last name: ");
    scanf(" %c", &c);

    while ((d=getchar()) != ' ') {
        ;
    }

    while ((d=getchar()) != '\n') {
        if (d != ' ')
            printf("%c", d);
    }

    printf(", %c\n", c);

    return 0;
}
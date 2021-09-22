#include <stdio.h>
#include <ctype.h>

#define LEN 26
int main(){
    int word[LEN] = {0}, word_le;
    char c;

    printf("Enter first word: ");

    while( (c = getchar()) != '\n') {
        word[tolower(c)-'a']++;
    }

    printf("Enter second word: ");

    while( (c = getchar()) != '\n') {
        word[tolower(c)-'a']--;
    }

    for(int i = 0; i < LEN; ++i) {
        if (word[i] != 0){
            printf("The words are not anagramas\n");
            goto end;
        }
    }

    printf("The words are anagramas\n");

end:
    return 0;
}
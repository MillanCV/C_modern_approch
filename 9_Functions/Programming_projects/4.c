#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define LEN 26

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

void read_word(int counts[26])
{
    char c;

    while( (c = getchar()) != '\n') {
        counts[tolower(c)-'a']++;
    }
}

bool equal_array(int counts1[26], int counts2[26])
{
    for(int i = 0; i < LEN; i++)
        if(counts1[i] != counts2[i]) return false;

    return true;
}

int main(){
    int word1[LEN] = {0}, word2[LEN] = {0} ;
    

    printf("Enter first word: ");
    read_word(word1);

    printf("Enter second word: ");
    read_word(word2);

    if (equal_array(word1, word2))
        printf("The words are anagramas\n");
    else   
        printf("The words are not anagramas\n");

end:
    return 0;
}
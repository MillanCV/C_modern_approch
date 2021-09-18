#include <stdio.h>

#define LENGTH 1024

int main(){
    char sentence[LENGTH];
    int position = 0, word_length = 0;
    char c, terminating;


    printf("Enter a sentence: ");
    
    while( (c = getchar()) != EOF ) {
        if( c == '.' || c == '?' || c == '!') {
            terminating = c;
            break;
        }
        sentence[position] = c;
        position++;
    }
    printf("position is %d\n", position);
    printf("Reversal of sentece: ");
    for (; position >= 0; --position){
        if(sentence[position] == ' '){
            printf("word lenght is %d\n", word_length);
            for(int i = position++; i <= word_length; ++i) {
                printf("i is %d\n", i);
                printf("%c", sentence[i]);
            }
            word_length = 0;
        }
        word_length++;
    }

    printf("%c\n", terminating);

    return 0;
}
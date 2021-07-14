#include <stdio.h>

int main(){
    double avg = 0;
    int count;
    char c;

    printf("Enter a sentence: ");

    while((c=getchar())!= '\n') {
        if(c == ' ') {
            if (avg == 0)
                avg = count;
            else {
                avg += count;
                avg /= 2;
            } 
            count = 0;
        }
        else
            count++;
    }

    printf("Average word length: %.1lf\n", avg);

    return 0;
}
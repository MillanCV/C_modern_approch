#include <stdio.h>

int main(void){
    int i, j;

    i = 4;
    j = 3;
    printf("%d\n",(i > j) - (i < j));

    i = 4;
    j = 4;
    printf("%d\n",(i > j) - (i < j));

    i = 3;
    j = 4;
    printf("%d\n",(i > j) - (i < j));


    return 0;
}
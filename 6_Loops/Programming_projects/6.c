/********************************************************
 * Prints a one month calendar                          *
 * User specidifies the number of days in the month     *
 * and the day of the week on which the month begins    *
 *******************************************************/

#include <stdio.h>

int main(){
    int days, start_day, offset, spaces;

    printf("Enter number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat):");
    scanf("%d", &start_day);

    offset = start_day - 1;
    
    printf("\n");
    spaces = 3 * offset;
    if(spaces > 0)
        printf("%*c", spaces, ' ');

    
    for (int i = 1; i <= days; ++i){
        printf("%3d", i);
        if (((i + offset) % 7 ) == 0)
            printf("\n");
    }

    printf("\n");

    return 0;
}
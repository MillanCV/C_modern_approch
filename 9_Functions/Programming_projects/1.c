#include <stdio.h>

#define MAX_LEN 10

void selection_sort(int arr[], int len)
{
    int max, position = 0;

    max = arr[position];
    for(int i = 1; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            position = i;
        }
    }

    arr[position] = arr[len - 1];
    arr[len - 1] = max;

    if (len > 1) selection_sort(arr, len - 1);
}

int main()
{
    int numbers[MAX_LEN];

    printf("Please, enter 10 numbers: ");
    scanf("%d %d %d %d %d %d %d %d %d %d",
           &numbers[0], &numbers[1], &numbers[2],&numbers[3], &numbers[4], 
           &numbers[5], &numbers[6], &numbers[7],&numbers[8], &numbers[9] );

    printf("Your numbers:");
    for(int i = 0; i < MAX_LEN; i++){
        printf(" %d", numbers[i]);
    }
    putchar('\n');

    selection_sort(numbers, MAX_LEN);

    printf("Your numbers ordered:");
    for(int i = 0; i < MAX_LEN; i++){
        printf(" %d", numbers[i]);
    }
    putchar('\n');

    return 0;

}
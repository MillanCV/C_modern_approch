#include <stdio.h>

int largest(int array[], int length);
int avg(int array[], int length);
int positive(int array[], int length);

int largest(int array[], int length)
{
    int large, temp;

    large = array[0];

    for (int i = 1; i < length; ++i)
    {
        temp = array[i];
        if (temp > large) large = temp;
    }

    return large;
}

int avg(int array[], int length)
{
    int avg = 0;

    for (int i = 0; i < length; ++i) 
        avg += array[i];

    return avg /= length;
}

int positive(int array[], int length)
{
    int positives = 0;

    for (int i = 0; i < length; ++i) 
    {
        if (array[i] >= 0) positives++;
    }

    return positives;
}

int main(){
    int arr[] = {4, 5, -3, 6, 8};

    printf("largest: %d\n", largest(arr, 5));
    printf("average: %d\n", avg(arr, 5));
    printf("positives: %d\n", positive(arr, 5));

    return 0;
}
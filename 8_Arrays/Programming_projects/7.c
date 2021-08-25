/*
 * Reads a 5x5 array of integers and then prints the row
 * sums and the column sums
 */

#include <stdio.h>

#define N 5

int main(){
    int matrix[N][N];
    int sum;

    for(int i = 0; i < N; ++i){
        printf ("Enter row %d: ", i);
            scanf("%d %d %d %d %d", &matrix[i][0],&matrix[i][1],&matrix[i][2],&matrix[i][3],&matrix[i][4]);
    }

    printf("ROW totals: ");
    for (int i = 0; i < N; ++i){
        sum = 0;
        for(int j = 0; j < N; ++j){
            sum += matrix[i][j];
        }
        printf("%d ", sum);
    }

    printf("\nCOLUMN totals: ");
    for (int i = 0; i < N; ++i){
        sum = 0;
        for(int j = 0; j < N; ++j){
            sum += matrix[j][i];
        }
        printf("%d ", sum);
    }
    printf("\n");

    return 0;
}
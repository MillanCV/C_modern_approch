/*
 * Modify programming prohect 7 so that it prompts for five quiz
 * grades for each of five students, then computes the total score
 * and average score for each student, and the average score, and low 
 * score for each quiz.
 */

#include <stdio.h>

#define N 5

int main(){
    int matrix[N][N];
    int total, high, low;
    double avg;

    for(int i = 0; i < N; ++i){
        printf ("Enter grades for student %d: ", i + 1);
            scanf("%d %d %d %d %d", &matrix[i][0],&matrix[i][1],&matrix[i][2],&matrix[i][3],&matrix[i][4]);
    }

    printf("Student\tTotal\tAverage\n");
    for(int i = 0; i < N; ++i){
        total = 0;
        avg = 0;
        for(int j = 0; j < N; ++j){
            total += matrix[i][j];
        }
        avg = total / N;
        printf("%d\t%d\t%.2f\n", i+1, total, avg);

    }

    printf("\nSubject\tTotal\tHigh\tLow\n");
    for (int i = 0; i < N; ++i){
        total = 0;
        high =  matrix[0][i];
        low =  matrix[0][i];
        for(int j = 0; j < N; ++j){
            total += matrix[j][i];
            if (matrix[j][i] > high)
                high = matrix[j][i];
            if (matrix[j][i] < low)
                low = matrix[j][i];
        }
        printf("%d\t%d\t%d\t%d\n", i+1, total, high, low);
    }
    printf("\n");
    

    return 0;
}
#include <stdio.h>

#define DAYS 30
#define HOURS 24

int main() {
    int temperatures[DAYS][HOURS];
    double daily_avg, monthly_avg;


    for (int i = 0; i < DAYS; ++i) {
        for (int j = 0; j < HOURS; ++j) {
            daily_avg += temperatures[i][j];
        }
        daily_avg /= HOURS;
        monthly_avg += daily_avg;
    }

    monthly_avg /= DAYS;

    return 0;
}
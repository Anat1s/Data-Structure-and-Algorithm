/* 키의 평균을 난수로 구하기 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double avgof(const double height[], int n)
{
    int i;
    int sum = 0;
    double avg;

    for(i = 0; i < n; i++)
        sum += height[i];
    avg = sum / n;

    return avg;
}

int main()
{
    int i;
    double *height;
    int number;

    srand(time(NULL));
    number = 5 + rand() % 16;

    printf("사람 수 : %d\n", number);

    height = malloc(sizeof(double) * number);

    for(i = 0; i < number; i++) {
        height[i] = (double)(160 + rand() % 26) / 1;
        printf("height[%d] : %.1f\n", i, height[i]);
    }

    printf("키의 평균 값 : %.1f\n", avgof(height, number));
    free(height);

    return 0;
}
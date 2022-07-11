/* 키의 합 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumof(const int height[], int n)
{
    int i;
    int sum = 0;

    for(i = 0; i < n; i++) 
        sum += height[i];
    
    return sum;
}

int main()
{
    int i;
    int *height;
    int nx;

    printf("사람 수 : ");
    scanf("%d", &nx);

    height = malloc(sizeof(int) * nx);
    srand(time(NULL));

    for(i = 0; i < nx; i++) {
        height[i] = 160 + rand() % 26;  // 160 ~ 186 사이 키의 합
        printf("height[%d] = %d\n", i, height[i]);
    }

    printf("키의 합 : %d\n", sumof(height, nx));
    free(height);

    return 0;
}
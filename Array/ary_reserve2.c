/* 배열 요소를 역순으로 정렬 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define swap(type, x, y) do { type t = x; x = y; y = t; } while(0)

void reserve(int a[], int n)
{
    int i, j;

    for(i = 0; i < n / 2; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", a[j]);
        }
        printf("\n");
        printf("a[%d]과 a[%d]를 교환 합니다.\n", i, n - i - 1);
        swap(int, a[i], a[n - i - 1]);
    }

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n역순 정렬을 종료합니다.\n");
}

int main()
{
    int i;
    int *x;
    int nx;
    unsigned int number;

    printf("요소 수 : ");
    scanf("%d", &nx);

    x = malloc(sizeof(int) * nx);
    srand(time(NULL));

    for(i = 0; i < nx; i++)
        x[i] = 1 + rand() % 100;
    
    reserve(x, nx);
    free(x);

    return 0;
}
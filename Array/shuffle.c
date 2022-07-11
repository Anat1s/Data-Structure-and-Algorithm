/* 배열의 모든 요소를 섞는다. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define swap(type, x, y) do {type t = x; x = y; y = t; } while(0)

void shuffle(int a[], int n)
{
    int i;
    int shuffle_index;

    for(i = 0; i < n; i++) {
        shuffle_index = rand() % n;
        swap(int, a[i], a[shuffle_index]);
    }
}

int main()
{
    int i;
    int *x;
    int nx;

    printf("요소 수 : ");
    scanf("%d", &nx);

    x = malloc(sizeof(int) * nx);
    srand(time(NULL));

    for(i = 0; i < nx; i++) {
        x[i] = 1 + rand() % 100;
        printf("x[%d] : %d\n", i, x[i]);
    }

    printf("\n");
    printf("배열을 무작위로 섞겠습니다.\n");
    shuffle(x, nx);

    for(i = 0; i < nx; i++)
        printf("%d ", x[i]);
    printf("\n");
    printf("셔플을 마쳤습니다.\n");

    free(x);

    return 0;
}
/* 배열을 복사하는 함수 */
#include <stdio.h>
#include <stdlib.h>

void ary_copy(int dest[], const int src[], int n)
{
    int i;

    for(i = 0; i < n; i++) 
        dest[i] = src[i];

    dest[n] = '\0';
}

int main()
{
    int i;
    int *a, *b;
    int nx;

    printf("요소 수 : ");
    scanf("%d", &nx);

    a = malloc(sizeof(int) * nx);
    b = malloc(sizeof(int) * nx);

    for(i = 0; i < nx; i++) {
        printf("b[%d] : ", i);
        scanf("%d", &b[i]);
    }

    printf("b의 배열 요소를 a로 복사합니다.\n");
    ary_copy(a, b, nx);

    printf("복사된 a의 배열\n");
    for(i = 0; i < nx; i++) 
        printf("%d ", a[i]);
    printf("\n");
    printf("복사를 마쳤습니다.\n");

    free(b);
    free(a);

    return 0;
}
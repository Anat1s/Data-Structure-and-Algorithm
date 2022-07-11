/* 배열 요소의 최댓값을 구한다(값을 난수로 생성) */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 요소 개수가 n인 배열 a의 요소의 최댓값을 구한다. */
int maxof(const int a[], int n)
{
    int i;
    int max = a[0]; /* 최댓값 */

    for(i = 0; i < n; i++)
        if(a[i] > max) max = a[i];
    
    return max;
}

int main()
{
    int i;
    int *hegiht;
    int number;

    printf("사람 수 : ");
    scanf("%d", &number);

    hegiht = malloc(sizeof(int) * number);
    srand(time(NULL));

    for(i = 0; i < number; i++) {
        hegiht[i] = 100 + rand() % 90;  // 100 ~ 189의 난수를 생성 대입
        printf("height[%d] = %d\n", i, hegiht[i]);
    }

    printf("최댓값은 %d 입니다.\n", maxof(hegiht, number));
    free(hegiht);

    return 0;
}
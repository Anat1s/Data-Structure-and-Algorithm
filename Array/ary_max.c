#include <stdio.h>
#include <stdlib.h>

/* 요소 개수가 n인 배열 a의 요소의 최댓값을 구한다. */
int maxof(const int a[], int n)
{
    int i;
    int max = a[0];

    for(i = 0; i < n; i++)
        if(a[i] > max) max = a[i];
    
    return max;
}

int main()
{
    int i;
    int *height;    // 배열의 첫 번째 요소의 포인터
    int number;     // 인원 = 배열 height의 요소 개수

    printf("사람 수 : ");
    scanf("%d", &number);

    height = malloc(sizeof(int) * number);
    
    printf("%d 사람의 키를 입력하세요.\n", number);
    for(i = 0; i < number; i++) {
        printf("height[%d] : ", i);
        scanf("%d", &height[i]);
    }

    printf("최댓값은 %d 입니다.\n", maxof(height, number));
    free(height);

    return 0;
}
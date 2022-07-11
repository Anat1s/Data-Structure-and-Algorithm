#include <stdio.h>
#include <stdlib.h>

int minof(const int a[], int n)
{
    int i;
    int min = a[0];

    for(i = 0; i < n; i++)
        if(a[i] < min) min = a[i];
    
    return min;
}

int main()
{
    int i;
    int *height;
    int nx;

    printf("요소 수 : ");
    scanf("%d", &nx);

    height = malloc(sizeof(int) * nx);

    for(i = 0; i < nx; i++) {
        printf("x[%d] : ", i);
        scanf("%d", &height[i]);
    }

    printf("최솟값: %d\n", minof(height, nx));
    free(height);

    return 0;
}
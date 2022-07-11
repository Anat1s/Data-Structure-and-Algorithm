/* 기수 변환의 배열 맨 앞이 아닌 윗자리를 저장하는 함수 */
#include <stdio.h>
#include <stdlib.h>

int card_convr(unsigned int x, int n, char d[])
{
    char dchar[] = "0123456789ABCDEF";
    int digits = 0;

    if(x == 0)
        d[digits++] = dchar[0];
    else
        while(x) {
            d[digits++] = dchar[x % n];
            x /= n;
        }
    
    return digits;
}

int main()
{
    int i;
    unsigned int no;
    int cd;
    int dno;
    char cno[512];
    int retry;

    puts("10진수를 기수 변환합니다.");
    do {
        printf("변환할 음이아닌 정수 : ");
        scanf("%u", &no);

        do {
            printf("어떤 진수로 변환할까요?(2-16) : ");
            scanf("%d", &cd);
        } while(cd < 2 || cd > 16);

        dno = card_convr(no, cd, cno);

        printf("%d 진수로는 ", cd);
        for(i = 0; i < dno; i++)
            printf("%c", cno[i]);
        printf("입니다.\n");
        printf("다시 하시겠습니까?(1... 예/0... 아니오)\n");
        scanf("%d", &retry);
    } while(retry == 1);

    return 0;
}
#include <stdio.h>

int main(void)
{
    int a;
    printf("원하는 단을 입력하세요\n");
    scanf("%d" , &a);
    for (int i = 1; i < 10; i++)
    {
        printf("%d * %d = %d\n", a, i, a*i);
    }
    return 0;
}
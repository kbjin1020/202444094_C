#include <stdio.h>

int main()
{
    int a;
    printf("7을 출력했을때 : ");
    scanf("%d",&a);
    for (int i = 0; i <= 100; i+=a)
    {
        printf("%d\n", i);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int x,y;
    char op;

    scanf("%d %c %d",&x,&op,&y);
    if (op == *)
    {
        printf("%d %c %d = %d",x,op,y,x*y);
    }
    if (op == /)
    {
        printf("%d %c %d = %d",x,op,y,x/y);
    }
    else
    printf("잘못된 연산방법입니다")
}
#include <stdio.h>

int main()
{
    int a, b;

    printf("첫번째 정수 입력 : ");
    scanf_s("%d",&a);
    printf("두번째 정수 입력 : ");
    scanf_s("%d",&b);

    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b : %d\n", a > b);
    printf("a < b : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);
    printf("a == 5 : %d\n", a == 5);
    printf("5 == b : %d\n", 5 == a);

    return 0;
}
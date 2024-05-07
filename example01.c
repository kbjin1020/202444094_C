#include <stdio.h>

int main(void)
{
    short num1;
    int num2;
    long long num3;

    printf("자료형의 크기를 구하는 함수 : sizeof() 함수 \n");
    printf("short형 변수 : %d 바이트\n", sizeof(num1));
    printf("int형 변수 : %d 바이트\n", sizeof(num2));
    printf("long long형 변수 : %d 바이트\n", sizeof(num3));
    printf("1바이트는 8비트입니다\n");
    printf("short형 변수 : %d 비트\n", sizeof(num1)*8);
    printf("int형 변수 : %d 비트\n", sizeof(num2)*8);
    printf("long long형 변수 : %d 비트\n", sizeof(num3)*8);
    return 0;
}


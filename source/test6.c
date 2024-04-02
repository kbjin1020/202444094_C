#include <stdio.h>

int main()
{
    int val, a;

    a = 8;
    val = ++a;
    printf("a=8일때 \n");
    printf("1. val이 = ++a이면 val = %d, a=%d\n", val ,a);

    a = 8;
    val = a++;
    printf("a=8일때 \n");
    printf("2. val이 = a++이면 val = %d, a=%d\n", val ,a);

    a = 8;
    val = --a;
    printf("a=8일때 \n");
    printf("3. val이 = --a이면 val = %d, a=%d\n", val ,a);

    a = 8;
    val = a--;
    printf("a=8일때 \n");
    printf("4. val이 = a--이면 val = %d, a=%d\n", val ,a);


    

}

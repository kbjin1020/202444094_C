#include <stdio.h>

int main()
{
    int a=0;
    int i=0;

    while(i<=9)
    {       
        ++i;
        a+=i;
    }
    printf("%d", a);
    return 0;
}
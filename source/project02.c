#include <stdio.h>

int main()
{
    int a;
    int i = 1;
    int sum = 0;
    scanf("%d",&a);
    while (1)
    {
        if (i % 2 == 0)
        {
           sum += i;
        }
        if (i == a)
        {
            break;
        }
        i++;
    }
    printf("%d",sum);
    return 0;
}

#include <stdio.h>
int main()
{
    int cnt, input=0;
    scanf("%d %d", &cnt, &input);
    int a[cnt];
    for (int i = 0; i < cnt; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < cnt; j++)
    {
        if (input > a[j])
        {
            printf("%d ", a[j]);
        }
        
    }
    
}

#include <stdio.h>

int main()
{
    int i = 7, n;
    scanf("%d", &n);
    for(i=7;i<=n;i+=7)
    {
        if(i % 2 == 0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}

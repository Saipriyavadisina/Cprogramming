#include <stdio.h>

int main()
{
    int i = 7, n;
    scanf("%d", &n);
    do
    {
        if(i % 2 == 0)
        {
            printf("%d ",i);
        }
        i += 7;
    }
    while(i<=n);
    return 0;
}

#include <stdio.h>

int main()
{
    int i,n, a=0;
    scanf("%d", &n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            a++;
        }
    }
    if(a==0)
    {
        printf("%d is Prime", n);
    }
    else
    {
        printf("%d is not a Prime", n);
    }
    return 0;
}

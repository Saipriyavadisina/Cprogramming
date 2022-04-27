#include <stdio.h>
int main()
{
    int i=6,n;
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d ", i);
        i+=6;
    }
    return 0;
}

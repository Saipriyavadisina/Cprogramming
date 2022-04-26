#include<stdio.h>
int main()
{
    int i, n;
    printf("\n n value is : ");
    scanf("%d", &n);
    printf("\n Even Numbers between 1 and %d are :", n);
    for(i=1;i<=n;i++)
    {
        if (i%2 == 0) 
        {
            printf(" %d", i);
        }
    }
    return 0;
}

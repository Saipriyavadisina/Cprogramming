#include <stdio.h>

int main()
{
    int n, sum = 0, c, value;
    
    printf("n value : ");
    scanf("%d", &n);
    printf("Enter %d integers : ",n);
    for (c = 1; c <= n; c++)
    {
        scanf("%d",&value);
        sum = sum + value;
    }
    
    printf("Sum of integers = %d",sum);
    return 0;
}

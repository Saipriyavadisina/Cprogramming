#include <stdio.h>

int main()
{
    int n;
    printf("Enter value:");
    scanf("%d", &n);
    if(n > 0)
    {
        printf("Positive");
    }
    else
    {
        printf("Negative");
    }
    return 0;
}
#include <stdio.h>
int isPrime(int n)
{
    int count = 0;
    for(int i = 1; i < n; i++)
    {
        printf("%d", i % n);
        if (i % n == 0)
            count++;
    }
    if(count)
        return 0;
    return 1;
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 2; i <= n; i++)
    {
        if (isPrime(i))
            printf("%d\n", i);
    }
    return 0;
}

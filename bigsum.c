#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long int arr[10];
    int a,x;
    scanf("%d",&a);
    long int sum;
    sum = 0;
    for(x=0;x<a;x++)
    scanf("%li",&arr[x]);
    for(x=0;x<a;x++)
    {
        sum = sum + arr[x];
    }
    printf("%li",sum);
    return 0;
}

#include <stdio.h>
#include <string.h>
int main ()
{
    char c[100];
    int len;
    scanf("%[^\n]",c);
    len = strlen(c);
    printf("%d",len);
    return 0;
}

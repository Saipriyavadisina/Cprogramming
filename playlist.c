#include <stdio.h>

int main()
{
	int i, n, a;
	scanf("%d", &i);
	while(i--)
	{
	    scanf("%d%d", &n, &a);
	    int count = (n/(a*3));
	    printf("%d\n", count);
	}
	return 0;
}


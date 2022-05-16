#include<stdio.h>
int main()
{
	int x, a, b;
	scanf("%d %d %d", &x, &a, &b);
	printf("The profit is Rs.%d", (a * x) - (b * x) - 100);
	return 0;
}

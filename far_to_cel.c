#include<stdio.h>
int main()
{
	float f;
	scanf("%f", &f);
	float c = ((f - 32) * 5) / 9;
	printf("%.2fC", c);
	return 0;
}

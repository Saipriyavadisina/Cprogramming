#include<stdio.h>
int main()
{
	float res;
	int a,b;
	scanf("%d %d", &a, &b);
	res = a * 75 + b * 112;
	printf("widgets = %d\ngizmo = %d\nTotal weight = %.3f", a, b, res / 1000);
	return 0;
}

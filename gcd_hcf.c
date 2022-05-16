#include<stdio.h>
int gcd(int a, int b)
{
	int rem = a % b;
	while(rem != 0)
	{
		a = b;
		b = rem;
		rem = a % b;
	}
	return b;
}
int main()
{
	int a, b, hcf, lcm;
	scanf("%d %d", &a, &b);
	if(a > b)
	{
		hcf = gcd(a, b);
	}
	else
	{
		hcf = gcd(b, a);
	}
	hcf = gcd(a, b);
	lcm = a * b / hcf;
	printf("GCD=%d\nLCM=%d", hcf, lcm);
	return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
	int xa, xb, ya, yb;
	scanf("%d %d %d %d", &xa, &xb, &ya, &yb);
	float dist;
	dist = sqrt(pow((xb - xa), 2))+ pow((yb - ya), 2);
	printf("Distance b/w 2 points = %.2f units", dist);
	return 0;
}

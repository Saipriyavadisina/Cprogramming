#include<stdio.h>
int main()
{
	int i, j, m, n, sum, difference;
	printf("Enter no.of rows and columns of matrices: ");
	scanf("%d%d", &m, &n);
	
	int matA[m][n], matB[m][n], matC[m][n], matD[m][n];
	printf("Enter %d elements of 1st matrix: ", i*j);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &matA[i][j]);
		}
	}
	printf("Enter %d elements of 2nd matrix: ", i*j);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &matB[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			matC[i][j] = matA[i][j] + matB[i][j];
		}
	}
	printf("sum of given matrices: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t", matC[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			matD[i][j] = matA[i][j] - matB[i][j];
		}
	}
	printf("Difference of given matrices: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t", matD[i][j]);
		}
		printf("\n");
	}
}

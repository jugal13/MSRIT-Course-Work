// Program to find tranpose of a matrix
#include <stdio.h>
#include <math.h>
int main()
{
	int i, j, A[10][10], B[10][10] = {0}, m, n;
	printf("Enter the Order\n");
	scanf("%d %d", &m, &n);
	printf("Enter the Matrix\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &A[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			B[i][j] = A[j][i];
		}
	}
	printf("Transpose of the Matrix\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}
	return 0;
}
// Program to find trace and norm of matrix
#include <stdio.h>
#include <math.h>
int main()
{
	int i, j, A[10][10], m, n, trace = 0, sum = 0;
	float norm;
	printf("Enter the Order\n");
	scanf("%d%d", &m, &n);
	if (m == n)
	{
		printf("Enter the Matrix\n");
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				scanf("%d", &A[i][j]);
			}
		}
		for (i = 0; i < m; i++)
		{
			trace = trace + A[i][i];
			for (j = 0; j < n; j++)
			{
				sum = sum + A[i][j] * A[i][j];
			}
		}
		norm = sqrt((float)sum);
		printf("Trace=%d\nNorm=%f\n", trace, norm);
	}
	else
	{
		printf("Cannot find trace\n");
	}
	return 0;
}
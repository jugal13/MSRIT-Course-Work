// Program to add 2 matrices
#include <stdio.h>
int main()
{
	int A[10][10], B[10][10], C[10][10], m, n, p, q, i, j;
	printf("Enter Order of First Matrix:\n");
	scanf("%d%d", &m, &n);
	printf("Enter Order of Second Matrix:\n");
	scanf("%d%d", &p, &q);
	if (m == p && n == q)
	{
		printf("Enter First Matrix:\n");
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				scanf("%d", &A[i][j]);
			}
		}
		printf("Enter Second Matrix:\n");
		for (i = 0; i < p; i++)
		{
			for (j = 0; j < q; j++)
			{
				scanf("%d", &B[i][j]);
			}
		}
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < q; j++)
			{
				C[i][j] = A[i][j] + B[i][j];
			}
		}
		printf("Sum is:\n");
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				printf("%d\t", C[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Matrices arent Compatible:\n");
	}
	return 0;
}
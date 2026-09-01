// Program to sort array elements using selection sort
#include <stdio.h>
void Sort(int A[], int n);
int main()
{
	int A[100], i, j, n;
	printf("Enter size of array\n");
	scanf("%d", &n);
	printf("Enter the array\n");
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	Sort(A, n);
	printf("Sorted Array is\n");
	for (i = 0; i < n; i++)
		printf("%d\t", A[i]);
	printf("\n");
	return 0;
}
void Sort(int A[], int n)
{
	int i, j, min, temp;
	for (i = 0; i < n; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (A[j] < A[min])
				min = j;
		}
		temp = A[i];
		A[i] = A[min];
		A[min] = temp;
	}
}
// Program to add array elements using pointers
#include <stdio.h>
int main()
{
	int A[10], i, n, *p, sum = 0;
	p = A;
	printf("Enter the number of elements:\n");
	scanf("%d", &n);
	printf("Enter array elements:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", p + i);
	}
	for (i = 0; i < n; i++)
	{
		sum = sum + *(p + i);
	}
	printf("Sum = %d\n", sum);
	return 0;
}
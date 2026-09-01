// Program to find an element in an array using linear search
#include <stdio.h>
int main()
{
	int A[10], n, i, ele, flag = 0;
	printf("Enter number of elements\n");
	scanf("%d", &n);
	printf("Enter array elements\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
	printf("Enter elements to be searched for\n");
	scanf("%d", &ele);
	for (i = 0; i < n; i++)
	{
		if (A[i] == ele)
		{
			flag = 1;
			break;
		}
	}
	if (flag)
	{
		printf("Element found at %d place\n", i + 1);
	}
	else
	{
		printf("Element not found\n");
	}
	return 0;
}
// Program to perform binary search for an element
#include <stdio.h>
int main()
{
	int A[10], i, n, low, mid, high, ele, pos, flag = 0;
	printf("Enter number of elements\n");
	scanf("%d", &n);
	printf("Enter array elements\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
	printf("Enter elements to be searched for\n");
	scanf("%d", &ele);
	low = 0;
	high = n - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (A[mid] == ele)
		{
			pos = mid + 1;
			flag = 1;
			break;
		}
		else if (ele > A[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	if (flag)
	{
		printf("Element found at %d\n", pos);
	}
	else
	{
		printf("Element not found\n");
	}
	return 0;
}
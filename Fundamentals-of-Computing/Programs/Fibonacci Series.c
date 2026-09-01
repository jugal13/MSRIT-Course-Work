// Program to print the first n numbers of fibonacci series
#include <stdio.h>
int main()
{
	int first = 0, second = 1, third, n, i = 0;
	printf("enter the number of terms to be printed\n");
	scanf("%d", &n);
	printf("the first %d numbers of series are\n", n);
	for (i = 0; i < n; i++)
	{
		printf("%d\n", first);
		third = first + second;
		first = second;
		second = third;
	}
	return 0;
}
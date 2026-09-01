// Program to compare two strings without builtin function
#include <stdio.h>
int main()
{
	char s1[20], s2[20];
	int i, j, flag = 1;
	printf("Enter the two strings\n");
	scanf("%s%s", s1, s2);
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (i != j)
	{
		flag = 0;
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			if (s1[i] != s2[i])
			{
				flag = 0;
				break;
			}
		}
	}
	if (flag)
	{
		printf("Strings are same\n");
	}
	else
	{
		printf("Strings are not the same\n");
	}
	return 0;
}
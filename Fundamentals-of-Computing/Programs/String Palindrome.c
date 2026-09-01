// Program to check if a string is palindrome or not without using builtin functions
#include <stdio.h>
int main()
{
	char str[20];
	int i, j, len, flag = 1;
	printf("Enter the string\n");
	scanf("%s", str);
	for (len = 0; str[len] != '\0'; len++)
		;
	for (i = 0, j = len - 1; i < len / 2; i++, j--)
	{
		if (str[i] != str[j])
		{
			flag = 0;
			break;
		}
	}
	if (flag)
	{
		printf("String is palindrome\n");
	}
	else
	{
		printf("String is not palindrome\n");
	}
	return 0;
}
// Program to concatenate 2 strings without built in function
#include <stdio.h>
int main()
{
	char s1[20], s2[20];
	int i, j;
	printf("enter the two strings\n");
	scanf("%s%s", s1, s2);
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
	{
		s1[i + j] = s2[j];
	}
	s1[i + j] = '\0';
	printf("the concatenated string is %s", s1);
	return 0;
}
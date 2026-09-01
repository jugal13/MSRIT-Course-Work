// Program to find string length without builtin functions
#include <stdio.h>
int main()
{
	int l = 0;
	char name[20], *cp;
	printf("enter string\n");
	scanf("%s", name);
	cp = name;
	while (*cp != '\0')
	{
		l++;
		cp++;
	}
	printf("length of string is %d\n", l);
	return 0;
}
// Program to calculate grade using else if ladder
#include <stdio.h>
int main()
{
	int m1, m2, m3, m4, m5, m6, per;
	printf("Enter 6 subject marks\n");
	scanf("%d%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5, &m6);
	if (m1 < 40 || m2 < 40 || m3 < 40 || m4 < 40 || m5 < 40 || m6 < 40)
	{
		printf("Student has failed\n");
	}
	else
	{
		per = (m1 + m2 + m3 + m4 + m5 + m6) / 6;
		if (per >= 90)
		{
			printf("S+ grade\n");
		}
		else if (per >= 80)
		{
			printf("S grade\n");
		}
		else if (per >= 70)
		{
			printf("A grade\n");
		}
		else if (per >= 60)
		{
			printf("B grade\n");
		}
		else if (per >= 50)
		{
			printf("C grade\n");
		}
		else if (per >= 45)
		{
			printf("D grade\n");
		}
		else if (per >= 40)
		{
			printf("E grade\n");
		}
		else
		{
			printf("F grade\n");
		}
	}
	return 0;
}
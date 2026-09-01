// Program to implement a simple calculator
#include <stdio.h>
int main()
{
	int a, b;
	char op;
	printf("Enter the numbers\n");
	scanf("%d%d", &a, &b);
	printf("Enter the operator\n");
	scanf("%c", &op);
	switch (op)
	{
	case '+':
		printf("Sum=%d\n", a + b);
		break;
	case '-':
		printf("Difference=%d\n", a - b);
		break;
	case '*':
		printf("Product=%d\n", a * b);
		break;
	case '/':
		if (b == 0)
		{
			printf("Divide by zero error\n");
		}
		else
		{
			printf("Quotient=%d\n", a / b);
		}
		break;
	case '%':
		printf("Remainder=%d\n", a % b);
		break;
	default:
		printf("Invalid operation\n");
	}
	return 0;
}
// Program to calculate the area of a polygon
#include <stdio.h>
int main()
{
	int ch;
	float l, w, b, h, a, r, area, flag = 1;
	printf("Enter the polygon 1. Triangle 2. Square 3. Circle 4. Rectangle:\n");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1:
		printf("Enter base and height of the triangle:\n");
		scanf("%f%f", &b, &h);
		area = 0.5 * b * h;
		break;
	case 2:
		printf("Enter the side of square:\n");
		scanf("%f", &a);
		area = a * a;
		break;
	case 3:
		printf("Enter the radius of the circle:\n");
		scanf("%f", &r);
		area = 3.1415 * r * r;
		break;
	case 4:
		printf("Enter the length and breadth:\n");
		scanf("%f%f", &l, &w);
		area = l * w;
		break;
	default:
		printf("Invalid choice\n");
		flag = 0;
	}
	if (flag)
	{
		printf("Area of the selected polygon = %f\n", area);
	}
	return 0;
}
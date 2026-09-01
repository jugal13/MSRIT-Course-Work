/* Write and execute C program to define a structure student which contain student name, roll number, marks of 3 subjects (Maths, Chemistry, Physics) as members of structure and read the input for three students and display the same using array of structures  */
#include <stdio.h>
struct Student
{
	char name[20];
	int rollno;
	int marks[3];
	int totalmarks;
};
int main()
{
	int i, j, n;
	struct Student S[40];
	printf("Enter number of students\n");
	scanf("%d", n);
	for (i = 0; i < n; i++)
	{
		printf("\nEnter the details of the student %d\n", i + 1);
		printf("Enter name of student\n");
		scanf("%s", S[i].name);
		printf("Enter rollno of student\n");
		scanf("%d", &S[i].rollno);
		printf("Enter marks of 3 subjects\n");
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &S[i].marks[j]);
		}
		S[i].totalmarks = 0;
		for (j = 0; j < 3; j++)
		{
			S[i].totalmarks += S[i].marks[j];
		}
		printf("Total marks for student is %d\n\n", S[i].totalmarks);
	}
	return 0;
}
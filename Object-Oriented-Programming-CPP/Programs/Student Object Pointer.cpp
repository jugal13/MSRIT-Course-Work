// 25. Student Object Pointer
#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
	char name[20];
	int rollno;
	int m[3];
	string grade;

public:
	void input();
	void calc();
	void display();
};
void Student::input()
{
	int i;
	cout << "Enter Student name" << endl;
	cin >> name;
	cout << "Enter student roll no" << endl;
	cin >> rollno;
	cout << "Enter 3 subject marks" << endl;
	for (i = 0; i < 3; ++i)
	{
		cin >> m[i];
	}
}
void Student::calc()
{
	int total = m[0] + m[1] + m[2];
	int per = total / 3;
	if (per >= 90)
		grade = "S+";
	else if (per >= 80)
		grade = 'S';
	else if (per >= 70)
		grade = 'A';
	else if (per >= 60)
		grade = 'B';
	else if (per >= 50)
		grade = 'C';
	else if (per >= 45)
		grade = 'D';
	else if (per >= 40)
		grade = 'E';
	else
		grade = 'F';
}
void Student::display()
{
	cout << "Student details are" << endl;
	cout << "Name : " << name << endl;
	cout << "Roll No : " << rollno << endl;
	cout << "Grade : " << grade << endl;
}
int main()
{
	int i, n;
	Student S[100];
	Student *p = S;
	cout << "Enter the number of students" << endl;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		(p + i)->input();
		(p + i)->calc();
	}
	for (i = 0; i < n; i++)
		(p + i)->display();
	return 0;
}

// 9. Inheritance
// 				Person |
// 		| -------------- |
// 	Teacher 				Student
// 										 |
// 										 |
// 									 Marks
#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
	string name;

public:
	void get()
	{
		cout << "Enter Person's name" << endl;
		cin >> name;
	}
	void print()
	{
		cout << "Person's Name : " << name << endl;
	}
};
class Teacher : public Person
{
private:
	string designation;
	int no;

public:
	void getteacher()
	{
		get();
		cout << "Enter Teachers designation" << endl;
		cin >> designation;
		cout << "Enter number of publications" << endl;
		cin >> no;
	}
	void printteacher()
	{
		print();
		cout << "Designation : " << designation << endl;
		cout << "Number of publications : " << no << endl;
	}
};
class Student : public Person
{
private:
	string rollno;

protected:
	int m[3];

public:
	void getstudent()
	{
		get();
		cout << "Enter student rollno" << endl;
		cin >> rollno;
		cout << "Enter 3 subject marks" << endl;
		for (int i = 0; i < 3; i++)
			cin >> m[i];
	}
	void printstudent()
	{
		print();
		cout << "Roll No : " << rollno << endl;
	}
};
class Marks : public Student
{
private:
	int per;

public:
	void getmarks()
	{
		getstudent();
		per = (m[0] + m[1] + m[2]) / 3;
	}
	void printmarks()
	{
		printstudent();
		cout << "Percentage : " << per << endl;
	}
};
int main()
{
	Marks M;
	Teacher T;
	cout << "Enter Teacher's details" << endl;
	T.getteacher();
	cout << "Enter student details" << endl
			 << endl;
	M.getmarks();
	cout << endl
			 << endl;
	T.printteacher();
	cout << endl
			 << endl;
	M.printmarks();
	return 0;
}
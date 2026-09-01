// 26. Student UG PG
#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
	string name;
	string id;
	int age;
	void get()
	{
		cout << "enter student name" << endl;
		cin >> name;
		cout << "enter student id" << endl;
		cin >> id;
		cout << "enter student age" << endl;
		cin >> age;
	}
	void print()
	{
		cout << "Student Information: " << endl;
		cout << "Name: " << name << endl;
		cout << "USN: " << id << endl;
		cout << "Age: " << age << endl;
	}
};
class UG : public Student
{
public:
	int sem;
	int fees;
	int stipend;
	static int count[8];
	static int Age[8];
	void getug()
	{
		get();
		cout << "enter UG student info" << endl;
		cout << "enter semester" << endl;
		cin >> sem;
		cout << "enter fees" << endl;
		cin >> fees;
		cout << "enter stipend" << endl;
		cin >> stipend;
		Age[sem - 1] += AGE();
		count[sem - 1]++;
	}
	void printug()
	{
		print();
		cout << "Semester: " << sem << endl;
		cout << "Fees: " << fees << endl;
		cout << "Stipend: " << stipend << endl;
	}
	int AGE()
	{
		return age;
	}
};
int UG::count[8] = {0};
int UG::Age[8] = {0};
class PG : public Student
{
public:
	int sem;
	int fees;
	int stipend;
	static int count[8];
	static int Age[8];
	void getpg()
	{
		get();
		cout << "enter PG student info" << endl;
		cout << "enter semester" << endl;
		cin >> sem;
		cout << "enter fees" << endl;
		cin >> fees;
		cout << "enter stipend" << endl;
		cin >> stipend;
		Age[sem - 1] += AGE();
		count[sem - 1]++;
	}
	void printpg()
	{
		print();
		cout << "Semester: " << sem << endl;
		cout << "Fees: " << fees << endl;
		cout << "Stipend: " << stipend << endl;
	}
	int AGE()
	{
		return age;
	}
};
int PG::count[8] = {0};
int PG::Age[8] = {0};
int main()
{
	UG U[10];
	PG P[10];
	int i, m, n;
	cout << "enter number of ug students" << endl;
	cin >> m;
	cout << "enter number of pg students" << endl;
	cin >> n;
	for (i = 0; i < m; i++)
	{
		cout << "UG: " << i + 1 << endl;
		U[i].getug();
	}
	if (m != 0)
	{
		cout << "UG student details are: " << endl;
		for (i = 0; i < 8; i++)
		{
			if (UG::count[i] != 0)
				cout << "Sem: " << i + 1 << "\tAverage Age: " << UG::Age[i] / UG::count[i] << endl;
		}
	}
	for (i = 0; i < n; i++)
	{
		cout << endl;
		cout << "PG: " << i + 1 << endl;
		P[i].getpg();
	}
	if (n != 0)
	{
		cout << "PG student details are: " << endl;
		for (i = 0; i < 8; i++)
		{
			if (PG::count[i] != 0)
				cout << "Sem: " << i + 1 << "\tAverage Age: " << PG::Age[i] / PG::count[i] << endl;
		}
	}
	return 0;
}
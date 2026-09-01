// 24. Student Binary File
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Student
{
public:
	char rollno[20];
	char name[30];
	int m[3];
	int total;
	int per;
	char grade[3];
	void setdata()
	{
		cout << "Enter roll number" << endl;
		cin >> rollno;
		cout << "Enter name" << endl;
		cin >> name;
		cout << "Enter marks in 3 subjects" << endl;
		for (int i = 0; i < 3; i++)
			cin >> m[i];
		total = m[0] + m[1] + m[2];
		per = total / 3;
		if (per >= 90)
		{
			grade[0] = 'S';
			grade[1] = '+';
		}
		else if (per >= 80)
			grade[0] = 'S';
		else if (per >= 70)
			grade[0] = 'A';
		else if (per >= 60)
			grade[0] = 'B';
		else if (per >= 50)
			grade[0] = 'C';
		else if (per >= 45)
			grade[0] = 'D';
		else if (per >= 40)
			grade[0] = 'E';
		else
			grade[0] = 'F';
	}
	void showdata()
	{
		cout << "Student name: " << name << endl;
		cout << "Roll: " << rollno << endl;
		cout << "Total: " << total << endl;
		cout << "Grade: " << grade << endl;
		cout << endl;
	}
};
void write_record()
{
	ofstream outfile;
	outfile.open("student1.dat", ios::binary | ios::app);
	Student obj;
	obj.setdata();
	outfile.write((char *)&obj, sizeof(obj));
	outfile.close();
}
void display()
{
	ifstream infile;
	infile.open("student1.dat", ios::binary);
	if (!infile)
	{
		cout << "Error opening file." << endl;
		exit(0);
	}
	Student obj;
	while (infile.read((char *)&obj, sizeof(obj)))
	{
		obj.showdata();
	}
	infile.close();
}
int main()
{
	int n;
	cout << "Enter the number of students" << endl;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Enter Student " << i << " details" << endl;
		write_record();
	}
	cout << "List of records" << endl;
	display();
	return 0;
}
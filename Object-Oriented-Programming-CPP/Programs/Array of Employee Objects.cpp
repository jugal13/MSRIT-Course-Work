// 3. Employee details and salary using array of objects
#include <iostream>
#include <string>
using namespace std;
class EMPLOYEE
{
private:
	string name;
	string empno;
	double basic;
	double DA;
	double IT;
	double Net_Salary;
	double gross;

public:
	void input();
	void calc();
	void output();
};
void EMPLOYEE::input()
{
	cout << "Enter employee name" << endl;
	cin >> name;
	cout << "Enter emplyee id" << endl;
	cin >> empno;
	cout << "Enter Basic Salary" << endl;
	cin >> basic;
}
void EMPLOYEE::calc()
{
	DA = 0.52 * basic;
	gross = basic + DA;
	IT = 0.3 * gross;
	Net_Salary = gross - IT;
}
void EMPLOYEE::output()
{
	cout << endl
			 << endl;
	cout << "Name: " << name << endl;
	cout << "Number: " << empno << endl;
	cout << "Basic Salary" << basic << endl;
	cout << "DA: " << DA << endl;
	cout << "IT: " << IT << endl;
	cout << "Net Salary: " << Net_Salary << endl;
	cout << endl;
}
int main()
{
	int i, n;
	EMPLOYEE E[100];
	cout << "Enter number of emplyees" << endl;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "Enter Employee " << i + 1 << " details" << endl;
		E[i].input();
		E[i].calc();
	}
	for (i = 0; i < n; i++)
	{
		cout << "Employee " << i + 1 << " details are" << endl;
		E[i].output();
	}
	return 0;
}
// 17. Pure Virtual Function Example
#include <iostream>
using namespace std;
class Student
{
public:
	virtual void g() = 0;
};
class Engineering : public Student
{
public:
	void g()
	{
		cout << "Welcome to engineering" << endl;
	}
};
class Medical : public Student
{
public:
	void g()
	{
		cout << "Welcome to medical science" << endl;
	}
};
class Science : public Student
{
public:
	void g()
	{
		cout << "Welcome to pure science" << endl;
	}
};
int main()
{
	Student *S1;
	Engineering E;
	Medical M;
	Science S;
	S1 = &E;
	S1->g();
	S1 = &M;
	S1->g();
	S1 = &S;
	S1->g();
	return 0;
}
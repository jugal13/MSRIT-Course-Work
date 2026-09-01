// 28. Virtual Base Class
#include <iostream>
using namespace std;
class A
{
public:
	int i;
	void get()
	{
		cout << "Enter i value" << endl;
		cin >> i;
	}
	void put()
	{
		cout << "Number inputted is : " << i << endl;
	}
};
class B : virtual public A
{
protected:
	int j;

public:
	void get1()
	{
		cout << "Enter j value" << endl;
		cin >> j;
	}
	void put1()
	{
		cout << "Number inputted is : " << j << endl;
	}
};
class C : virtual public A
{
protected:
	int k;

public:
	void get2()
	{
		cout << "Enter k value" << endl;
		cin >> k;
	}
	void put2()
	{
		cout << "Number inputted is : " << k << endl;
	}
};
class D : public B, public C
{
private:
	int total;

public:
	void put3()
	{
		total = i + j + k;
		put();
		put1();
		put2();
		cout << "Total of 3 numbers is : " << total << endl;
	}
};
int main()
{
	D obj;
	obj.get();
	obj.get1();
	obj.get2();
	obj.put3();
	return 0;
}
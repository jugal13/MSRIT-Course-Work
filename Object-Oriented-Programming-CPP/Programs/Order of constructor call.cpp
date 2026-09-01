// 14. Order of Constructor Call in Inheritance
#include <iostream>
using namespace std;
class BC1
{
public: 
	BC1()
	{
		cout << "Base Class 1 Constructor Called" << endl;
	} 
	~BC1()
	{
		cout << "Base Class 1 Destructor Called" << endl;
	}
};
class BC2
{
public:
	BC2()
	{
		cout << "Base Class 2 Constructor Called" << endl;
	} 
	~BC2()
	{
		cout << "Base Class 2 Destructor Called" << endl;
	}
};
class DC1: public BC1
{
public: 
	DC1()
	{
		cout << "Derived Class 1 Constructor Called" << endl;
	} 
	~DC1()
	{
		cout << "Derived Class 1 Destructor Called" << endl;
	}
};
class DC2: 
public DC1
{
public:
	DC2()
	{
		cout << "Derived Class 2 Constructor Called" << endl;
	} 
	~DC2()
	{
		cout << "Derived Class 2 Destructor Called" << endl;
	}
};
class DC3: public DC2
{
public: 
	DC3()
	{
		cout << "Derived Class 3 Constructor Called" << endl;
	} 
	~DC3()
	{
		cout << "Derived Class 3 Destructor Called" << endl;
	}
};
class DC4: public BC1,public BC2
{
public:
	DC4()
	{
		cout << "Derived Class 4 Constructor Called" << endl;
	}
	~DC4()
	{
		cout << "Derived Class 4 Destructor Called" << endl;
	}
};
int main()
{
	DC3 P;
	DC4 Q;
	return 0;
}
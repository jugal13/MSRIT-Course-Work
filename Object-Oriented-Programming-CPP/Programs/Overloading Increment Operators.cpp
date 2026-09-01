// 15. Overloading Increment Operator
#include <iostream>
using namespace std;
class ran
{
public:
	int data;
	ran operator++()
	{
		ran t;
		++data;
		t.data = data;
		return t;
	}
	ran operator++(int)
	{
		ran t;
		t.data = data;
		data++;
		return t;
	}
};
int main()
{
	ran r, r1, r2;
	cout << "Enter data value" << endl;
	cin >> r.data;
	r1 = ++r;
	cout << "After Pre increment and assignment" << endl;
	cout << r.data << "  " << r1.data << endl;
	cout << endl
			 << endl;
	cout << "Enter data value" << endl;
	cin >> r.data;
	r2 = r++;
	cout << "After Post increment and assignment" << endl;
	cout << r.data << "  " << r2.data << endl;
	return 0;
}
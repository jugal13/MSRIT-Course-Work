// 22. Static Member Object Count for BOX class and calculate volume of each box
#include <iostream>
using namespace std;
class BOX
{
private:
	double l, b, h, v;
	static int count;

public:
	void input()
	{
		cout << "Enter length" << endl;
		cin >> l;
		cout << "Enter breadth" << endl;
		cin >> b;
		cout << "Enter height" << endl;
		cin >> h;
	}
	static void getCount()
	{
		BOX::count++;
		cout << "Current count of objects is : " << BOX::count << endl;
	}
	void print()
	{
		v = l * b * h;
		cout << "Length : " << l << endl;
		cout << "Breadth : " << b << endl;
		cout << "Height : " << h << endl;
		cout << "Volume : " << v << endl;
	}
};
int BOX ::count = 0;
int main()
{
	int n, i;
	BOX B[100];
	cout << "Enter the number of boxes" << endl;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "Enter Box " << i + 1 << " details" << endl;
		B[i].input();
		BOX::getCount();
	}
	for (i = 0; i < n; i++)
	{
		cout << "Box " << i + 1 << " details are" << endl;
		B[i].print();
	}
	return 0;
}
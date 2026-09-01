
// 23. String Class with Constructor
#include <iostream>
#include <string>
using namespace std;
class myclass
{
private:
	string s;

public:
	myclass() {}
	myclass(string a) : s(a) {}
	myclass(const myclass &t)
	{
		s = t.s;
	}
	friend void cat(myclass a, myclass b);
};
void cat(myclass a, myclass b)
{
	string s3 = a.s + b.s;
	cout << s3;
}
int main()
{
	myclass obj("Hello"), obj2;
	obj2 = obj;
	cat(obj, obj2);
	cout << endl;
	return 0;
}
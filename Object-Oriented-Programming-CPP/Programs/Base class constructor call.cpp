// 4. Passing paramters to base class constructor call
#include <iostream>
using namespace std;
class MEDIA
{
public:
	string title;
	int price;
	MEDIA(string a, int n)
	{
		title = a;
		price = n;
	}
	virtual void show() = 0;
};
class BOOK : public MEDIA
{
	int page;

public:
	BOOK(string a, int pr, int pa) : MEDIA(a, pr), page(pa) {}
	void show()
	{
		cout << "The title is :" << title << endl;
		cout << "Price is :" << price << endl;
		cout << "Pages in the book is :" << page << endl;
	}
};
class TAPE : public MEDIA
{
	int time;

public:
	TAPE(string a, int pr, int ti) : MEDIA(a, pr), time(ti) {}
	void show()
	{
		cout << "The title is :" << title << endl;
		cout << "Price is :" << price << endl;
		cout << "Play time of the tape is :" << time << endl;
	}
};
int main()
{
	string title;
	int price, page, time;
	cout << "Enter title" << endl;
	cin >> title;
	cout << "Enter price" << endl;
	cin >> price;
	cout << "Enter the pages" << endl;
	cin >> page;
	MEDIA *M;
	BOOK b(title, price, page);
	M = &b;
	M->show();
	cout << "Enter the run time of the tape " << endl;
	cin >> time;
	TAPE t(title, price, time);
	M = &t;
	M->show();
	return 0;
}
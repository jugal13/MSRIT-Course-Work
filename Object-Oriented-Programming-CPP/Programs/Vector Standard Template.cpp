// 27. Vector Standard Template
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v;
	vector<int>::iterator i;
	int ch, m, n;
	do
	{
		cout << "\nEnter \n1. To insert\n2. Delete the last element \n3. Size of vector \n4. Display elements in vector \n5. Clear the vector\n6. Exit\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << endl
					 << "Enter the element to be inserted" << endl;
			cin >> m;
			v.push_back(m);
			break;
		case 2:
			v.pop_back();
			cout << endl
					 << "Element deleted" << endl;
			break;
		case 3:
			cout << endl
					 << "Size of vector is: " << endl;
			cout << v.size();
			break;
		case 4:
			cout << endl
					 << "Elements of vector are:" << endl;
			if (v.size() == 0)
				cout << "Vector is empty" << endl;
			else
			{
				for (i = v.begin(); i != v.end(); i++)
					cout << *i << "\t";
			}
			break;
		case 5:
			v.clear();
			cout << endl
					 << "The vector has been cleared" << endl;
			break;
		case 6:
			cout << "Operation Complete" << endl;
			break;
		}
	} while (ch != 6);
	return 0;
}
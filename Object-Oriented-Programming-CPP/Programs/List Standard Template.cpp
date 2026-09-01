// 10. List Standard Template
#include <iostream>
#include <list>
#include <cstdlib>
using namespace std;
int main()
{
	list<int> A;
	list<int> B;
	list<int>::iterator i;
	B.push_front(10);
	B.push_front(20);
	B.push_front(30);
	B.push_front(40);
	B.push_front(50);
	B.push_front(60);
	B.push_front(70);
	B.push_front(80);
	int ch, element;
	while (1)
	{
		cout << "\n1. Push Front\n2. Push Back\n3. Pop front\n4. Pop Back\n5. Size\n6. Remove specific element\n7. Remove duplicates\n8. Reverse List\n9. Merge List\n10. Display List\n11. Exit\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "Push Front" << endl;
			cout << "Enter element to be pushed" << endl;
			cin >> element;
			A.push_front(element);
			break;
		case 2:
			cout << "Push Back" << endl;
			cout << "Enter element to be pushed" << endl;
			cin >> element;
			A.push_back(element);
			break;
		case 3:
			cout << "Pop Front" << endl;
			A.pop_front();
			cout << "Element popped" << endl;
			break;
		case 4:
			cout << "Pop Back" << endl;
			A.pop_back();
			cout << "Element popped" << endl;
			break;
		case 5:
			cout << "Size of List" << endl;
			cout << "Size: " << A.size();
			break;
		case 6:
			cout << "Remove element" << endl;
			cout << "Enter element to be removed" << endl;
			cin >> element;
			A.remove(element);
			break;
		case 7:
			cout << "Remove duplicates" << endl;
			A.sort();
			A.unique();
			break;
		case 8:
			cout << "Reverse List" << endl;
			A.reverse();
			break;
		case 9:
			cout << "Merge Lists" << endl;
			A.sort();
			B.sort();
			A.merge(B);
			break;
		case 10:
			cout << "Displaying List" << endl;
			cout << "List B is" << endl;
			for (i = B.begin(); i != B.end(); i++)
				cout << *i << "\t";
			cout << endl
					 << "List A is" << endl;
			for (i = A.begin(); i != A.end(); i++)
				cout << *i << "\t";
			cout << endl;
			break;
		case 11:
			cout << "Operation Complete" << endl;
			exit(0);
		}
	}
	return 0;
}
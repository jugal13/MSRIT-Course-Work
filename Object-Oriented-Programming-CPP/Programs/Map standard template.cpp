// 11. Map Standard Template
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
	int ch;
	int value;
	char key;
	map<char, int> m;
	map<char, int>::iterator i;
	while (1)
	{
		cout << "\n1. Insert\n2. Delete\n3. Search\n4. Display value of element at key\n5. Size\n6. Display Map\n7. Exit\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "Inserting Element" << endl;
			cout << "Enter char KEY" << endl;
			cin >> key;
			cout << "Enter int VALUE" << endl;
			cin >> value;
			m[key] = value;
			break;
		case 2:
			cout << "Delete element" << endl;
			cout << "Enter element to be deleted" << endl;
			cin >> value;
			for (i = m.begin(); i != m.end(); i++)
			{
				if (i->second == value)
					m.erase(i);
			}
			if (i == m.end())
				cout << "Element not found in map" << endl;
			break;
		case 3:
			cout << "Search" << endl;
			cout << "Enter key to be searched for" << endl;
			cin >> key;
			i = m.find(key);
			if (i == m.end())
				cout << "Element not found";
			else
				cout << "Element at key: " << i->first << " found" << endl;
			break;
		case 4:
			cout << "Value" << endl;
			cout << "Enter key to display value" << endl;
			cin >> key;
			i = m.find(key);
			if (i == m.end())
				cout << "Element not found" << endl;
			else
				cout << "Element at KEY: " << i->first << " is " << i->second << endl;
			break;
		case 5:
			cout << "Size of map" << endl;
			cout << "Size: " << m.size();
			break;
		case 6:
			cout << "Displaying Map" << endl;
			cout << "Map is" << endl;
			for (i = m.begin(); i != m.end(); i++)
				cout << "KEY: " << i->first << " VALUE: " << i->second << endl;
			break;
		case 7:
			cout << "Operation Complete" << endl;
			exit(0);
		}
	}
	return 0;
}
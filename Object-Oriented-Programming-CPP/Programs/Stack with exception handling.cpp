// 21. Stack with Exception Handling
#include <iostream>
#include <exception>
#include <cstdlib>
using namespace std;
class Stack
{
public:
	int stack[100], top, size, i;
	Stack(int n);
	void push(int a);
	void pop();
	void display();
	void ShowTop();
};
Stack::Stack(int n)
{
	size = n;
	top = -1;
}
void Stack::push(int a)
{
	if (top >= size - 1)
		throw "Overflow";
	stack[++top] = a;
}
void Stack::pop()
{
	if (top == -1)
		throw "Underflow";
	cout << "element popped is " << stack[top];
	top--;
}
void Stack::display()
{
	if (top == -1)
		throw "Empty";
	cout << "stack elements are" << endl;
	for (i = top; i >= 0; i--)
		cout << stack[i] << endl;
	cout << endl;
}
void Stack::ShowTop()
{
	if (top == -1)
		throw "has no elements";
	cout << "Top of stack is " << stack[top] << " at position" << top << endl;
}
int main()
{
	int size, element, ch;
	cout << "enter size of stack" << endl;
	cin >> size;
	Stack S(size);
	while (1)
	{
		cout << "\n1. Push\n2. Pop\n3. display\n4. Show Top\n5. Exit\n";
		cin >> ch;
		try
		{
			switch (ch)
			{
			case 1:
				cout << "enter element to be pushed" << endl;
				cin >> element;
				S.push(element);
				break;
			case 2:
				S.pop();
				break;
			case 3:
				S.display();
				break;
			case 4:
				S.ShowTop();
				break;
			case 5:
				exit(0);
			}
		}
		catch (const char *e)
		{
			cout << "Stack " << e << endl;
		}
	}
	return 0;
}
// 5. Bubble sort using template class
#include <iostream>
#include <cstdlib>
using namespace std;
template <class T>
class Test
{
private:
	T K[100];
	int n;

public:
	void input()
	{
		cout << "Enter the number of elements" << endl;
		cin >> n;
		cout << "Enter the array elements" << endl;
		for (int i = 0; i < n; i++)
			cin >> K[i];
	}
	void bubble_sort()
	{
		int i, j;
		T temp;
		for (i = 0; i < n - 1; i++)
		{
			for (j = 0; j < n - i - 1; j++)
			{
				if (K[j] > K[j + 1])
				{
					temp = K[j];
					K[j] = K[j + 1];
					K[j + 1] = temp;
				}
			}
		}
		cout << endl
				 << "Sorted Array is" << endl;
		for (i = 0; i < n; i++)
			cout << K[i] << "\t";
		cout << endl
				 << endl;
	}
};
int main()
{
	Test<int> S;
	S.input();
	S.bubble_sort();
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	int data[7];
	cout << "Enter data word : ";
	cin >> data[2];
	cin >> data[4];
	cin >> data[5];
	cin >> data[6];
	data[0] = data[2] ^ data[4] ^ data[6];
	data[1] = data[2] ^ data[5] ^ data[6];
	data[3] = data[4] ^ data[5] ^ data[6];
	cout << "\n";
	for (int i = 0; i < 7; i++)
		cout << data[i];
	int p1, p2, p3;
	cout << "\nEnter recieved : ";
	int data1[7];
	for (int i = 0; i < 7; i++)
		cin >> data1[i];
	p1 = data1[0] ^ data1[2] ^ data1[4] ^ data1[6];
	p2 = data1[1] ^ data1[2] ^ data1[5] ^ data1[6];
	p3 = data1[3] ^ data1[4] ^ data1[5] ^ data1[6];
	int pos = p1 * 4 + p2 * 2 + p3;
	cout << pos;
}

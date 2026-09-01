#include <string>
#include <iostream>
using namespace std;
string xor_do(string a, string b)
{
	string res = "";
	for (int i = 1; i < a.length(); i++)
	{
		if (a[i] == b[i])
			res += '0';
		else
			res += '1';
	}
	return res;
}
string crc(string data, string div)
{
	string temp = "";
	string zeros = "";
	string rem = "";
	string res = "";
	for (int i = 0; i < div.length(); i++)
	{
		temp += data[i];
		zeros += "0";
	}
	int pos = div.length();
	while (pos <= data.length())
	{
		if (temp[0] == '1')
		{
			temp = xor_do(temp, div) + data[pos];
			res += '1';
		}
		else
		{
			temp = xor_do(temp, zeros) + data[pos];
			res += '0';
		}
		pos++;
	}
	return temp;
}
int main()
{
	string data, gen;
	cout << "Enter the data word : ";
	cin >> data;
	cout << "\nEnter the generator : ";
	cin >> gen;
	string temp = data;
	for (int i = 0; i < gen.length() - 1; i++)
		temp.push_back('0');
	string rem;
	rem = crc(temp, gen);
	string sent = data + rem;
	cout << "Sent data : " << sent << "\n";
	cout << "\nEnter received data : ";
	string rec;
	cin >> rec;
	cout << "\n"
			 << crc(rec, gen) << "\n";
	return 0;
}

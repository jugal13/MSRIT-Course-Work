// 8. Counting vowels in a file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int count[10] = {0};
	char ch;
	ifstream infile;
	ofstream outfile;
	infile.open("sample.txt", ios::in);
	outfile.open("vowelpos.txt", ios::out);
	while (!infile.eof())
	{
		infile.get(ch);
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		{
			switch (ch)
			{
			case 'a':
				count[0]++;
				break;
			case 'e':
				count[1]++;
				break;
			case 'i':
				count[2]++;
				break;
			case 'o':
				count[3]++;
				break;
			case 'u':
				count[4]++;
				break;
			case 'A':
				count[5]++;
				break;
			case 'E':
				count[6]++;
				break;
			case 'I':
				count[7]++;
				break;
			case 'O':
				count[8]++;
				break;
			case 'U':
				count[9]++;
				break;
			}
			outfile << ch << ":" << infile.tellg() << "\n";
		}
	}
	infile.close();
	for (int i = 0; i < 10; i++)
	{
		switch (i)
		{
		case 0:
			outfile << "Count of a =" << count[0] << "\n";
			break;
		case 1:
			outfile << "Count of e =" << count[1] << "\n";
			break;
		case 2:
			outfile << "Count of i =" << count[2] << "\n";
			break;
		case 3:
			outfile << "Count of o =" << count[3] << "\n";
			break;
		case 4:
			outfile << "Count of u =" << count[4] << "\n";
			break;
		case 5:
			outfile << "Count of A =" << count[5] << "\n";
			break;
		case 6:
			outfile << "Count of E =" << count[6] << "\n";
			break;
		case 7:
			outfile << "Count of I =" << count[7] << "\n";
			break;
		case 8:
			outfile << "Count of O =" << count[8] << "\n";
			break;
		case 9:
			outfile << "Count of U =" << count[9] << "\n";
			break;
		}
	}
	outfile.close();
	return 0;
}
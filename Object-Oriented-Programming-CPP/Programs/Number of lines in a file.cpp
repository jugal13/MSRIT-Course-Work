// 13. Number of Lines in a File
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	ifstream infile("Newfile.txt", ios::in);
	int count = 0;
	if (!infile)
	{
		cout << "Error file doesnt exist \n";
		exit(0);
	}
	while (getline(infile, s))
	{
		count++;
	}
	cout << "No. of lines :" << count << endl;
	return 0;
}
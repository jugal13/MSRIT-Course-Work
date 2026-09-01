// 19. Size of File using Character Count
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	char ch;
	ifstream infile("Sizefile.txt", ios::in);
	int count = 0;
	if (!infile)
	{
		cout << "Error file doesnt exist \n";
		exit(0);
	}
	while (!infile.eof())
	{
		if (infile.get(ch))
			count++;
	}
	cout << "Size of file :" << count << endl;
	return 0;
}
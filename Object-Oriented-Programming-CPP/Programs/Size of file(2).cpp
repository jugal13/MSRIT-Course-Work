// 20. Size of File using seekg
#include <iostream>
#include <fstream>
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
	//while(infile.get(ch))
	//count+=infile.gcount();
	infile.seekg(0, ios::end);
	count = infile.tellg();
	cout << "Size of file : " << count << endl;
	return 0;
}
// 12. Multiple Exception Blocks Example
#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
	try
	{
		try
		{
			throw " A Char Exception ";
		}
		catch (const char *e)
		{
			cout << "Char type in inner block" << endl;
			cout << "Rethrowing the exception " << endl;
			throw;
		}
	}
	catch (const char *e)
	{
		cout << "Char type in outer block" << e << endl;
	}
	catch (...)
	{
		cout << "Unexpected exception in the outerblock" << endl;
	}
	return 0;
}
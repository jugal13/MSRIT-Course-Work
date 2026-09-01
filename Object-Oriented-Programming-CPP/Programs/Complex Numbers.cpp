// 7. Complex number class
#include <iostream>
using namespace std;
class COMPLEX
{
private:
	double real;
	double imag;

public:
	COMPLEX() {}
	COMPLEX(double a, double b) : real(a), imag(b) {}
	friend COMPLEX add(COMPLEX a, COMPLEX b);
	friend COMPLEX multiply(COMPLEX a, COMPLEX b);
	void print()
	{
		cout << real << " +i " << imag << endl;
	}
};
COMPLEX add(COMPLEX a, COMPLEX b)
{
	COMPLEX c;
	c.real = (a.real) + (b.real);
	c.imag = (a.imag) + (b.imag);
	return c;
}
COMPLEX multiply(COMPLEX a, COMPLEX b)
{
	COMPLEX c;
	c.real = (a.real) * (b.real) - (a.imag) * (b.imag);
	c.imag = (a.real) * (b.imag) + (a.imag) * (b.real);
	return c;
}
int main()
{
	COMPLEX C3, C4;
	double real, imag;
	cout << "Enter first complex number" << endl;
	cout << "Enter real and imaginary part" << endl;
	cin >> real >> imag;
	COMPLEX C1(real, imag);
	cout << "Enter second complex number" << endl;
	cout << "Enter real and imaginary part" << endl;
	cin >> real >> imag;
	COMPLEX C2(real, imag);
	C3 = add(C1, C2);
	C4 = multiply(C1, C2);
	cout << endl
			 << endl;
	cout << "First Complex Number is" << endl;
	C1.print();
	cout << "Second Complex Number is" << endl;
	C2.print();
	cout << "Addition of Complex Numbers is" << endl;
	C3.print();
	cout << "Multiplication of Complex Number is" << endl;
	C4.print();
	return 0;
}
// 18. Rational Numbers
#include <iostream>
#include <cmath>
using namespace std;
class RATIONAL
{
private:
	double Numerator, Denominator;

public:
	RATIONAL() {}
	RATIONAL(double r, double i)
	{
		Numerator = r;
		Denominator = i;
	}
	void reduce()
	{
		double gcd = GCD(Numerator, Denominator);
		Numerator /= gcd;
		Denominator /= gcd;
	}
	double GCD(double a, double b)
	{
		if (a < b)
			return GCD(b, a);
		if (fabs(b) < 0.001)
			return a;
		else
			return (GCD(b, a - floor(a / b) * b));
	}
	friend ostream &operator<<(ostream &out, RATIONAL &p);
	friend istream &operator>>(istream &in, RATIONAL &p);
};

istream &operator>>(istream &in, RATIONAL &p)
{
	cout << "Enter Numerator Part ";
	in >> p.Numerator;
	cout << "Enter Denominator Part ";
	in >> p.Denominator;
	return in;
}

ostream &operator<<(ostream &out, RATIONAL &p)
{
	p.reduce();
	out << p.Numerator << "/" << p.Denominator << endl;
	return out;
}

int main()
{
	RATIONAL c1;
	cin >> c1;
	cout << c1;
	return 0;
}
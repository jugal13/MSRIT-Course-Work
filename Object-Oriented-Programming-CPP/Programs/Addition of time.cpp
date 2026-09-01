// 1. Addition of time using classes
#include <iostream>
using namespace std;
class Time
{
private:
	int hh;
	int mm;
	int ss;

public:
	Time()
	{
		hh = mm = ss = 0;
	}
	Time(int a, int b, int c) : hh(a), mm(b), ss(c) {}
	void add(Time P, Time Q);
	void output();
};
void Time::add(Time P, Time Q)
{
	ss = P.ss + Q.ss;
	mm = ss / 60;
	ss = ss % 60;
	mm = mm + P.mm + Q.mm;
	hh = mm / 60;
	mm = mm % 60;
	hh = hh + P.hh + Q.hh;
	hh = hh % 24;
}
void Time::output()
{
	cout << "Time is" << endl;
	cout << "Hours:Minutes:Seconds" << endl;
	cout << hh << ":" << mm << ":" << ss << endl;
}
int main()
{
	int h, m, s;
	cout << "Enter time 1 in hh:mm:ss format" << endl;
	cin >> h >> m >> s;
	Time T1(h, m, s);
	cout << "Enter Time 2 in hh:mm:ss format" << endl;
	cin >> h >> m >> s;
	Time T2(h, m, s);
	Time T3;
	T3.add(T1, T2);
	T3.output();
	return 0;
}
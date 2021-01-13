
#include <iostream>
using namespace std;

class Time
{
private:

public:
	int hours;
	int minutes;
	int seconds;

	Time() : hours(0), minutes(0), seconds(0) { }
	Time(int h, int m, int s) : hours(h), minutes(m), seconds(s)
	{
		FixTime();
	}

	void ShowTime()
	{
		if (hours < 10)
			cout << "0";
		cout << hours << ":";
		if (minutes < 10)
			cout << "0";
		cout << minutes << ":";
		if (seconds < 10)
			cout << "0";
		cout << seconds << endl;
	}

	void FixTime()
	{

		if (minutes >= 60)
		{
			int extraHours = minutes / 60;
			minutes -= extraHours * 60;
			hours += extraHours;
		}

		if (seconds >= 60)
		{
			int extraMinutes = seconds / 60;
			seconds -= extraMinutes * 60;
			minutes += extraMinutes;
		}
	}
	Time operator+ (const Time&) const;
	Time operator- (const Time&) const;
	Time operator+ (const int) const;
	bool operator== (const Time&) const;
};

bool Time::operator== (const Time& d2) const 
{
	if (hours == d2.hours && minutes == d2.minutes && seconds == d2.seconds)
		return true;
	else
		return false;
}


Time Time::operator+ (const int a) const
{
	int h = hours, m = minutes, s = seconds, extraH, extraM, extraS;
	extraH = a / 3600;
	h += extraH;
	extraM = (a - (extraH * 3600)) / 60;
	m += extraM;
	extraS = a - extraH * 3600 - extraM * 60;
	s += extraS;
	return Time(h, m, s);
}

Time Time::operator+ (const Time& d2) const
{
	int h, m, s;
	h = hours + d2.hours;
	m = minutes + d2.minutes;
	if (m > 60)
	{
		m -= 60;
		h++;
	}
	s = seconds + d2.seconds;
	if (s > 60)
	{
		s -= 60;
		m++;
	}
	return Time(h, m, s);
}

Time Time::operator- (const Time& d2) const
{
	int h, m, s;
	h = hours - d2.hours;
	m = minutes - d2.minutes;
	if (m < 0)
	{
		m += 60;
		h--;
	}
	s = seconds - d2.seconds;
	if (s < 0)
	{
		s += 60;
		m--;
	}
	return Time(h, m, s);
}

Time AddTime()
{
	int h, m, s;
	cout << "hours: ";
	cin >> h;
	cout << "minutes: ";
	cin >> m;
	cout << "seconds: ";
	cin >> s;
	Time t = Time(h, m, s);
	return t;
}

int main()
{
	//Сложение с числом
	//Time t1 = AddTime();
	//Time t2 = t1 + 120;
	//t2.ShowTime();

	//Time t1 = AddTime();
	//Time t2 = AddTime();
	//Time t3 = t1 + t2;
	//t3.ShowTime();

	//Time t1 = AddTime();
	//Time t2 = AddTime();
	//Time t3 = t1 - t2;
	//t3.ShowTime();

	Time t1 = AddTime();
	Time t2 = AddTime();
	bool a = t1 == t2;
	cout << a << endl;
}


#include <iostream>
using namespace std;

struct Time
{
	int hours;
	int minutes;
	int seconds;

	int GetSeconds()
	{
		int sum = 3600 * hours + 60 * minutes + seconds;
		return sum;
	}

	void ShowTime()
	{
		cout << hours << ":" << minutes << ":" << seconds << endl;
	}
};

//сложение
Time Addition(const Time& d1, const Time& d2)
{
	Time d;
	d.hours = d1.hours + d2.hours;
	d.minutes = d1.minutes + d2.minutes;
	if (d.minutes > 60)
	{
		d.minutes -= 60;
		d.hours++;
	}
	d.seconds = d1.seconds + d2.seconds;
	if (d.seconds > 60)
	{
		d.seconds -= 60;
		d.minutes++;
	}
	return d;
}

//вычитание
Time Subtraction(const Time& d1, const Time& d2)
{
	Time d;
	d.hours = d1.hours - d2.hours;
	d.minutes = d1.minutes - d2.minutes;
	if (d.minutes < 0)
	{
		d.minutes += 60;
		d.hours--;
	}
	d.seconds = d1.seconds - d2.seconds;
	if (d.seconds < 0)
	{
		d.seconds += 60;
		d.minutes--;
	}
	return d;
}

Time AddTime()
{
	Time t;
	cout << "hours: ";
	cin >> t.hours;
	cout << "minutes: ";
	cin >> t.minutes;
	cout << "seconds: ";
	cin >> t.seconds;
	return t;
}

int main()
{
	system("chcp 1251");
	Time t1 = AddTime();
	Time t2 = AddTime();
	Time result1 = Addition(t1, t2);
	result1.ShowTime();
	Time result2 = Subtraction(t1, t2);
	result2.ShowTime();
	return 0;
}

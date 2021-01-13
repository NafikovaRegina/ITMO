
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
		if (h < 0)
			throw ExceptionTime("Ошибка в значении поля 'часы' в конструкторе класса Time", h);
		if (m < 0)
			throw ExceptionTime("Ошибка в значении поля 'минуты' в конструкторе класса Time", m);
		if (s < 0)
			throw ExceptionTime("Ошибка в значении поля 'секунды' в конструкторе класса Time", s);
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

	class ExceptionTime //класс исключений
	{
	public:
		string message; //для имени функции
		int value; //для хранения ошибочного значения
		ExceptionTime(string _message, int _value)
		{
			message = _message; //строка с именем виновника ошибки
			value = _value; //сохраненное неправильное значение
		}
	};

};

Time Addition(const Time d1, const Time d2)
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
	system("chcp 1251");
	Time t1;
	Time t2;
	try
	{
		t1 = AddTime();
		t2 = AddTime();
		Time t3 = Addition(t1, t2);
		t3.ShowTime();
	}
	catch (Time::ExceptionTime& ex)
	{
		cout << ex.message << " ; Значение: " << ex.value << endl;
	}
}


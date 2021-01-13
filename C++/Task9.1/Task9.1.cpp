
#include <iostream>
using namespace std;

class Triangle
{
private:

public:
	double a;
	double b;
	double c;

	Triangle() : a(0), b(0), c(0) { }
	Triangle(double _a, double _b, double _c) : a(_a), b(_b), c(_c)
	{
		
	}

};

Triangle AddTime()
{
	double a,b,c;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	if ((a > b + c) || (b > a + c) || (c > a + b))
		throw "Ошибка: одна из сторон имеет длину большую, чем сумма двух других сторон";
	Triangle t = Triangle(a, b, c);
	return t;
}

//получение площади треугольника
double GetS(Triangle t)
{
	double p = (t.a + t.b + t.c) / 2;
	double s = sqrt(p*(p-t.a)*(p-t.b)*(p-t.c));
	return s;
}

int main()
{
	system("chcp 1251");
	try
	{
		Triangle t = AddTime();
		double s = GetS(t);
		cout << "S=" << s << endl;
	}
	catch (const char* exception)
	{
		cout << exception << endl;
	}
}


#include <iostream>
#include "dot.cpp"
using namespace std;

//треугольник
class Triangle
{
private:

public:
	Dot dot1;
	Dot dot2;
	Dot dot3;

	Triangle() { }
	Triangle(Dot _dot1, Dot _dot2, Dot _dot3) : dot1(_dot1), dot2(_dot2), dot3(_dot3)
	{
		
	}

	//длинна сторон
	void GetSides()
	{
		cout << "D12: " << dot1.distanceTo(dot2) << endl;
		cout << "D13: " << dot1.distanceTo(dot3) << endl;
		cout << "D23: " << dot2.distanceTo(dot3) << endl;
	}

	//периметр треугольника
	void GetPerimeter()
	{
		double ab = dot1.distanceTo(dot2);
		double ac = dot1.distanceTo(dot3);
		double bc = dot2.distanceTo(dot3);
		double p = ab + ac + bc;
		cout << "P=" << p << endl;
	}

	//площадь треугольника
	void GetArea()
	{
		double ab = dot1.distanceTo(dot2);
		double ac = dot1.distanceTo(dot3);
		double bc = dot2.distanceTo(dot3);
		double p = (ab + ac + bc) / 2;
		double s = sqrt(p*(p-ab)*(p-ac)*(p-bc));
		cout << "S=" << s << endl;
	}

};

Dot AddDot()
{
	int x, y;
	cout << "¬ведите x: ";
	cin >> x;
	cout << "¬ведите y: ";
	cin >> y;
	Dot dot = Dot(x, y);
	return dot;
}

Triangle AddTriangle()
{
	Dot d1 = AddDot();
	Dot d2 = AddDot();
	Dot d3 = AddDot();
	Triangle t = Triangle(d1, d2, d3);
	return t;
}

int main()
{
	system("chcp 1251");
	Triangle t = AddTriangle();
	t.GetSides();
	t.GetPerimeter();
	t.GetArea();
	return 0;
}

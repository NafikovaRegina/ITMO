#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // для алгоритма сортировки
using namespace std;

class Point
{
private:

public:
	int x;
	int y;

	Point() : x(0), y(0) { }
	Point(int _x, int _y) : x(_x), y(_y)
	{
		
	}
	friend std::ostream& operator<< (std::ostream& out, const Point& point);
	bool operator< (const Point&) const;
};

bool Point::operator< (const Point& d2) const
{
	if (x < d2.x && y < d2.y)
		return true;
	else
		return false;
}

std::ostream& operator<< (std::ostream& out, const Point& point)
{
	out << point.x << "," << point.y << endl;
	return out;
}

int main()
{
	std::vector<Point> v;
	v.push_back(Point(1, 2));
	v.push_back(Point(10, 12));
	v.push_back(Point(21, 7));
	v.push_back(Point(4, 8));
	std::sort(v.begin(), v.end()); // требуется перегрузка оператора < для
	// класса Point
	for (auto& point : v)
		std::cout << point << '\n'; // требуется перегрузка оператора << для
		// класса Point
	return 0;
}

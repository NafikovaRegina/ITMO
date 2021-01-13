#include <math.h>

class Dot
{
private:

public:
	double x;
	double y;
	Dot()
	{
		x = 0; y = 0;
	}
	Dot(double x, double y)
	{
		this->x = x;
		this->y = y;
	}
	double distanceTo(Dot point)
	{
		return sqrt(pow(point.x - x, 2) + pow(point.y - y, 2));
	}
};

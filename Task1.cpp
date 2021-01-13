
#include <iostream>
using namespace std;

//Вершина многоугольника
struct Dot
{
	double x;
	double y;
};

int main() 
{
	system("chcp 1251");
	const int n = 5;
	double s = 0;
	Dot masDist[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Введите X для точки №" << i + 1 << ": ";
		cin >> masDist[i].x;
		cout << "Введите Y для точки №" << i + 1 << ": ";
		cin >> masDist[i].y;
	}
	for (int i = 0; i < n; i++)
	{
		if ((i + 1) < n)
		{
			s += masDist[i].x * masDist[i + 1].y;
			s -= masDist[i+1].x * masDist[i].y;
		}
		else
		{
			s += masDist[i].x * masDist[0].y;
			s -= masDist[0].x * masDist[i].y;
		}
	}
	s = abs(s) / 2;
	cout << "Площадь равна: " << s << endl;
    return 0; 
}
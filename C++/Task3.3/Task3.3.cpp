
#include <iostream>
using namespace std;

//Площадь равностороннего треугольника
double AreaOfTriangle(double a)
{
    double s = (sqrt(3) * a * a) / 4;
    return s;
}

//площадь треугольника
double AreaOfTriangle(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    double s = sqrt(p*(p-a)*(p-b)*(p-c));
    return s;
}

int main()
{
    system("chcp 1251");
    double x1 = AreaOfTriangle(10);
    double x2 = AreaOfTriangle(8, 7, 9);
    cout << x1 << endl;
    cout << x2 << endl;
}



#include <iostream>
using namespace std;

/// <summary>
/// ФОРМУЛА ИЗ ПРИМЕРА НЕ РАБОТАЕТ, ПОМЕНЯТЬ ФОРМУЛУ В ФУНКЦИИ
/// </summary>
/// <param name="a"></param>
/// <param name="x_1"></param>
/// <param name="step"></param>
/// <returns></returns>
double Func(double a, double x_1, int step)
{
    double x = (a / (x_1 * x_1) + 2 * x_1) / 3;
    step--;
    if (step == 0)
        return x;
    else
        return Func(a, x, step);
}

int main()
{
    system("chcp 1251");
    double a, result1, result2;
    cout << "Введите число: ";
    cin >> a;
    result1 = pow(a, 1.0 / 3);//получение кубического корня через pow
	result2 = Func(a, a, 2);
    cout << "Кубический корень числа: " << result1 << " и " << result2 << endl;
}



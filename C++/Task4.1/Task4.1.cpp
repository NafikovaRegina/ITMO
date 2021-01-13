
#include <iostream>
using namespace std;

int Myroot(double, double, double, double&, double&);

int main()
{
	system("chcp 1251");
    double a, b, c, x, y;
    cout << "Введите значение a: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;
    cout << "Введите значение c: ";
    cin >> c;
    int result = Myroot(a, b, c, x, y);
    if (result != -1)
    {
        cout << "Первый корень равен " << x << endl;
        cout << "Второй корень равен " << y << endl;
    }
    else
        cout << "Дискриминант меньше 0, корни невещественные." << endl;
	return 0;
}

int Myroot(double a, double b, double c, double& x, double& y)
{
    if ((b * b - 4 * a * c) >= 0) //Если дискриминант больше или равен 0
    {
        x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        
        y = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
        if (x == y)
            return 0;
        else
            return 1;
    }
    else
    {
        return -1;
    }
}

#include <iostream>
using namespace std;

int Myroot(double, double, double, double&, double&);

int main()
{
	system("chcp 1251");
    double a, b, c, x, y;
    cout << "������� �������� a: ";
    cin >> a;
    cout << "������� �������� b: ";
    cin >> b;
    cout << "������� �������� c: ";
    cin >> c;
    int result = Myroot(a, b, c, x, y);
    if (result != -1)
    {
        cout << "������ ������ ����� " << x << endl;
        cout << "������ ������ ����� " << y << endl;
    }
    else
        cout << "������������ ������ 0, ����� ��������������." << endl;
	return 0;
}

int Myroot(double a, double b, double c, double& x, double& y)
{
    if ((b * b - 4 * a * c) >= 0) //���� ������������ ������ ��� ����� 0
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
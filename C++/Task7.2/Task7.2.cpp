
#include <iostream>
using namespace std;

//����� ���������
struct Roots
{
    int root1;
    int root2;
};

Roots Myroot(double a, double b, double c)
{
    Roots roots;
    if ((b * b - 4 * a * c) >= 0)
    {
        roots.root1 = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        roots.root2 = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
        return roots;
    }
}

int main()
{
    system("chcp 1251");
    double a, b, c;
    cout << "������� �������� a: ";
    cin >> a;
    cout << "������� �������� b: ";
    cin >> b;
    cout << "������� �������� c: ";
    cin >> c;
    Roots result = Myroot(a, b, c);
}


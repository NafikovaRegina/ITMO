
#include <iostream>
using namespace std;

//корни уравнени€
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
    cout << "¬ведите значение a: ";
    cin >> a;
    cout << "¬ведите значение b: ";
    cin >> b;
    cout << "¬ведите значение c: ";
    cin >> c;
    Roots result = Myroot(a, b, c);
}


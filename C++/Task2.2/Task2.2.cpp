
#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251");
    int num1, num2, num3, max;
    cout << "������� 3 ����� " << endl;
    cout << "1: "; cin >> num1;
    cout << "2: "; cin >> num2;
    cout << "3: "; cin >> num3;
    if (num1 > num2) max = num1;
    else max = num2;
    if (max < num3) max = num3;
    cout << "������������ ����� : " << max << endl;
}
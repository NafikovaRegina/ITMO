
#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251");
    int x;
    cout << "������� ���: ";
    cin >> x;
    //������� ����������� ����
    if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
        cout << "YES";
    else
        cout << "NO";
}


#include <iostream>
using namespace std;

/// <summary>
/// ������� ���������� ��� �����
/// </summary>
/// <param name="a">����� a</param>
/// <param name="b">����� b</param>
/// <returns></returns>
bool Input(int& a, int& b)
{
	cout << "������� �������� a: ";
	cin >> a;
	cout << "������� �������� b: ";
	cin >> b;
	if (a == b)
		return false;
	else
		return true;
}

int main()
{
	system("chcp 1251");
	int a, b;
	if (Input(a, b) == false) // if(!Input(a,b))
	{
		cout << "error";
		return 1;
	}
	int s = a + b;
	cout << "Sum=" << s << endl;;
	return 0;
}


#include <iostream>
using namespace std;

/// <summary>
/// функция сравнивает два числа
/// </summary>
/// <param name="a">число a</param>
/// <param name="b">число b</param>
/// <returns></returns>
bool Input(int& a, int& b)
{
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
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

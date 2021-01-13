
#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251");
	//Вариант мишени №2

	int x, y, sum = 0, R1 = 1, R2 = 2, R3 = 3, points = 50, i = 0;
	cout << "Стрелок должен набрать " << points << " очков" << endl;
	while (sum < points)
	{
		cout << "Введите x: ";
		cin >> x;
		cout << "Введите y: ";
		cin >> y;
		if (x * x + y * y <= (R1 * R1))
			sum += 10;
		else if (x * x + y * y <= (R2 * R2))
			sum += 5;
		else if (x * x + y * y <= (R3 * R3))
			sum += 1;
		cout << "Сумма: " << sum << endl;
		i += 1;
	}
	cout << "Кол-во выстрелов: " << i << endl;
	cout << "Статус стрелка: ";
	if (i == points / 10)
		cout << "Снайпер";
	else if (i < (2*(points / 10)))
		cout << "Просто стрелок";
	else
		cout << "Новичок";
	return 0;
}
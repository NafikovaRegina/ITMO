
#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251");
	//������� ������ �2

	int x, y, sum = 0, R1 = 1, R2 = 2, R3 = 3, points = 50, i = 0;
	cout << "������� ������ ������� " << points << " �����" << endl;
	while (sum < points)
	{
		cout << "������� x: ";
		cin >> x;
		cout << "������� y: ";
		cin >> y;
		if (x * x + y * y <= (R1 * R1))
			sum += 10;
		else if (x * x + y * y <= (R2 * R2))
			sum += 5;
		else if (x * x + y * y <= (R3 * R3))
			sum += 1;
		cout << "�����: " << sum << endl;
		i += 1;
	}
	cout << "���-�� ���������: " << i << endl;
	cout << "������ �������: ";
	if (i == points / 10)
		cout << "�������";
	else if (i < (2*(points / 10)))
		cout << "������ �������";
	else
		cout << "�������";
	return 0;
}
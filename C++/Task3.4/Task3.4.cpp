
#include <iostream>
using namespace std;

/// <summary>
/// 
/// </summary>
/// <param name="sum">����� �����</param>
/// <param name="n">����� n</param>
/// <param name="step">���</param>
/// <returns></returns>
int Sum(int sum, int n, int step)
{
	sum += 5 * step;
	step++;
	if (n+1 == step)
		return sum;
	else
		return Sum(sum, n, step);
}

int main()
{
	system("chcp 1251");
	int n, sum;
	cout << "������� n: ";
	cin >> n;
	sum = Sum(0, n, 1);
	cout << "�����: " << sum << endl;
	return 0;
}


#include <iostream>
using namespace std;

/// <summary>
/// ������ ����� ������������� ���������
/// </summary>
/// <param name="mas"></param>
/// <param name="n"></param>
/// <returns></returns>
int SumOfNegativeNumbers(int mas[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] < 0)
			sum += mas[i];
	}
	return sum;
}

/// <summary>
/// ������ ����� ������������� ���������
/// </summary>
/// <param name="mas"></param>
/// <param name="n"></param>
/// <returns></returns>
int SumOfPositiveNumbers(int mas[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > 0)
			sum += mas[i];
	}
	return sum;
}

/// <summary>
/// ������ ����� ��������� � ��������� ���������
/// </summary>
/// <param name="mas"></param>
/// <param name="n"></param>
/// <returns></returns>
int OddIndexes(int mas[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 != 0)
			sum += mas[i];
	}
	return sum;
}

/// <summary>
/// ������ ����� ��������� � ������� ���������
/// </summary>
/// <param name="mas"></param>
/// <param name="n"></param>
/// <returns></returns>
int EvenIndexes(int mas[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			sum += mas[i];
	}
	return sum;
}

/// <summary>
/// ������ ������������� ��������
/// </summary>
/// <param name="mas"></param>
/// <param name="n"></param>
/// <returns></returns>
int MaxValueIndex(int mas[], int n)
{
	int max = mas[0];
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		if (max < mas[i])
		{
			max = mas[i];
			index = i;
		}
	}
	return index;
}

/// <summary>
/// ������ ������������ ��������
/// </summary>
/// <param name="mas"></param>
/// <param name="n"></param>
/// <returns></returns>
int MinValueIndex(int mas[], int n)
{
	int min = mas[0];
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		if (min > mas[i])
		{
			min = mas[i];
			index = i;
		}
	}
	return index;
}

/// <summary>
/// ������������ ��������� �������, ������������� ����� ������������ � ����������� ����������
/// </summary>
/// <param name="mas"></param>
/// <param name="n"></param>
/// <returns></returns>
int SumBetweenMaxAndMinValues(int mas[], int n)
{
	int multiplication = 1;
	int maxValueIndex = MaxValueIndex(mas, n);
	int minValueIndex = MinValueIndex(mas, n);
	int first, second;
	if (maxValueIndex < minValueIndex)
	{
		first = maxValueIndex;
		second = minValueIndex;
	}
	else
	{
		first = minValueIndex;
		second = maxValueIndex;
	}
	for (int i = first; i < second; i++)
	{
		multiplication = multiplication * mas[i];
	}
	return multiplication;
}

int main()
{
	system("chcp 1251");
	const int n = 10;
	int mas[n];
	for (int i = 0; i < n; i++)
	{
		cout << "mas[" << i << "]=";
		cin >> mas[i];
	}
	double s = 0;
	for (int i = 0; i < n; i++)
	{
		s += mas[i];
	}
	cout << "�����: " << s << endl;

	double average = s / 10;
	cout << "������� ��������: " << average << endl;
	cout << "������ ����� ������������� ���������: " << SumOfNegativeNumbers(mas, n) << endl;
	cout << "������ ����� ������������� ���������: " << SumOfPositiveNumbers(mas, n) << endl;
	cout << "������ ����� ��������� � ��������� ���������: " << OddIndexes(mas, n) << endl;
	cout << "������ ����� ��������� � ������� ���������: " << EvenIndexes(mas, n) << endl;

	cout << "������ ������������� ��������: " << MaxValueIndex(mas, n) << endl;
	cout << "������ ������������ ��������: " << MinValueIndex(mas, n) << endl;
	cout << "������������ ��������� �������, ������������� ����� ������������ � ����������� ����������: " << SumBetweenMaxAndMinValues(mas, n) << endl;
	return 0;
}
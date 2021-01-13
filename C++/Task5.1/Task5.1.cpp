
#include <iostream>
using namespace std;

/// <summary>
/// расчет суммы отрицательных элементов
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
/// расчет суммы положительных элементов
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
/// расчет суммы элементов с нечетными индексами
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
/// расчет суммы элементов с четными индексами
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
/// Индекс максимального значения
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
/// Индекс минимального значения
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
/// произведение элементов массива, расположенных между максимальным и минимальным элементами
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
	cout << "Сумма: " << s << endl;

	double average = s / 10;
	cout << "Среднее значение: " << average << endl;
	cout << "Расчет суммы отрицательных элементов: " << SumOfNegativeNumbers(mas, n) << endl;
	cout << "Расчет суммы положительных элементов: " << SumOfPositiveNumbers(mas, n) << endl;
	cout << "Расчет суммы элементов с нечетными индексами: " << OddIndexes(mas, n) << endl;
	cout << "Расчет суммы элементов с четными индексами: " << EvenIndexes(mas, n) << endl;

	cout << "Индекс максимального значения: " << MaxValueIndex(mas, n) << endl;
	cout << "Индекс минимального значения: " << MinValueIndex(mas, n) << endl;
	cout << "Произведение элементов массива, расположенных между максимальным и минимальным элементами: " << SumBetweenMaxAndMinValues(mas, n) << endl;
	return 0;
}

#include <iostream>
#include <fstream>
using namespace std;


int main()
{
	const int N = 10;
	int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };


	ofstream fout("text.txt");
	for (int i = 0; i < N; i++)
	{
		fout << a[i] << " ";
	}

	int min = 0; // ��� ������ ������������ ��������
	int buf = 0; // ��� ������ ����������
	for (int i = 0; i < N; i++)
	{
		min = i; // ����� ������� ������, ��� ������ � ����������� ���������
		// � ����� ������ �������� ����� ������ � ����������� ���������
		for (int j = i + 1; j < N; j++)
			min = (a[j] < a[min]) ? j : min;
		// ������������ ����� ��������, ������� ��� ������� � �������
		if (i != min)
		{
			buf = a[i];
			a[i] = a[min];
			a[min] = buf;
		}
	}

	fout << endl;
	for (int i = 0; i < N; i++)
	{
		fout << a[i] << " ";
	}

	fout.close();
	return 0;
}

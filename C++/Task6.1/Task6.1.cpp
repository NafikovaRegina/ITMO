
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	system("chcp 1251");
	ofstream fout("text.txt");

	fout << "������ ����� ��������" << endl;
	fout << "� ������ ���� �������!.." << endl;
	fout << "��� ���� �� � ������ ������� ?" << endl;
	fout << "��� ����� �� � ���� ������ ? ..." << endl;
	fout << endl;
	fout << "������ ����� � ����� ������," << endl;
	fout << "� ����� ������ � �������" << endl;
	fout << "���!�� ������� �� ����" << endl;
	fout << "� �� �� ������� �����!" << endl;
	fout << endl;
	fout << "��� ��� ����� ������� ������," << endl;
	fout << "��� ��� ��� ������ �������" << endl;
	fout << "� ��, ��������, ������ ����," << endl;
	fout << "��� ����� � ����� ���� �����!" << endl;
	fout.close();
	return 0;
}

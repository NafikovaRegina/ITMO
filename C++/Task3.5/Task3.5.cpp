
#include <iostream>
using namespace std;

/// <summary>
/// ��������� ��������� ���� � "������������" ����
/// </summary>
/// <param name="num"></param>
/// <param name="code"></param>
/// <returns></returns>
string GetCode(int num, string code)
{
	
	if (num >= 1)
	{
		if (num % 2 == 0)
			code += "0";
		else
			code += "1";
		return GetCode(num / 2, code);
	}
	else
		return code;
}

int main()
{
	system("chcp 1251");
	int num;
	cout << "������� n: ";
	cin >> num;
	string code = GetCode(num, "");
	string result;
	int size = code.length() - 1;
	//"��������������" ������ � �����
	for (int i = size; i >= 0; i--)
	{
		result += code[i];
	}
	cout << result << endl;
	return 0;
}

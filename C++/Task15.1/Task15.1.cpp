
#include <iostream>
#include <map>
using namespace std;

struct Student
{
    string name;
    int grade;
};

int main()
{
	system("chcp 1251");
    map <string, int> mp;
    int n;
    cout << "���-�� ���������: ";  
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        Student student;
        cout << "������� ���: ";  
        cin >> student.name;
        cout << "������� ������: ";
        cin >> student.grade;
        mp[student.name] = student.grade;
    }

    //������������ ��������� ���������
    map <string, int> ::iterator it = mp.begin();
    for (int i = 0; it != mp.end(); it++, i++) 
    { 
        cout << i + 1 << ") ���� " << it->first << ", �������� " << it->second << endl;
    }
	return 0;
}


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
    cout << "Кол-во элементов: ";  
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        Student student;
        cout << "Введите имя: ";  
        cin >> student.name;
        cout << "Введите оценку: ";
        cin >> student.grade;
        mp[student.name] = student.grade;
    }

    //перечисление элементов коллекции
    map <string, int> ::iterator it = mp.begin();
    for (int i = 0; it != mp.end(); it++, i++) 
    { 
        cout << i + 1 << ") Ключ " << it->first << ", значение " << it->second << endl;
    }
	return 0;
}


#include <iostream>
#include <list>
#include <fstream>

using namespace std;

//базовый класс
class Person
{
private:
    string Name;
    string Address;
    string Phone;
    
public:
    string Type;

    string GetName()
    {
        return Name;
    }

    virtual void InputData()
    {
        cout << "Введите имя : ";
        cin >> Name;
        cout << "Введите адрес : ";
        cin >> Address;
        cout << "Введите телефон : ";
        cin >> Phone;
    }
    virtual string GetData()
    {
        string s = "Имя : " + Name + "; Адрес : " + Address + "; Телефон : " + Phone;
        return s;
    }

    virtual string GetExtraInfo() 
    {
        return "";
    }
};

//студент
class Student : public Person
{
private:
    string NameOfSpecialty;
public:

    Student()
    {
        InputData();
    }

    void InputData()
    {
        cout << "Введите данные студента" << endl;
        Person::InputData();
        cout << "Укажите название специальности: ";
        cin >> NameOfSpecialty;
        Type = "Студент";
    }
    string GetData()
    {
        string s = "Студент\n" + Person::GetData();
        return s;
    }

    string GetExtraInfo()
    {
        return "Название специальности: " + NameOfSpecialty;
    }
};

//преподаватель
class Teacher : public Person
{
private:
    string AcademicDegree;
public:

    Teacher()
    {
        InputData();
    }

    void InputData()
    {
        cout << "Введите данные преподавателя" << endl;
        Person::InputData();
        cout << "Укажите ученую степень: ";
        cin >> AcademicDegree;
        Type = "Преподаватель";
    }
    string GetData()
    {
        string s = "Преподаватель\n" + Person::GetData();
        return s;
    }

    string GetExtraInfo()
    {
        return "Ученая степень: " + AcademicDegree;
    }
};

typedef unique_ptr<Person> ptr_type;
typedef list<ptr_type> ptr_container_type;

int main()
{
    system("chcp 1251");
    string fileName = "text.txt";
    ptr_container_type container;//контейнер классов
	int menuchoice = 0;
    ofstream fout(fileName);
	while (menuchoice != 4)
	{
        cout << "1 - Добавить студента" << endl;
        cout << "2 - Добавить преподавателя" << endl;
        cout << "3 - Вывести список людей" << endl;
        cout << "4 - Сохранить в файл и выйти" << endl;
		cout << "Введите 1-5: ";
		cin >> menuchoice;
		switch (menuchoice)
		{
		case 1:
            container.emplace_back(new Student());
			break;
		case 2:
            container.emplace_back(new Teacher());
			break;
        case 3:
            for (auto const& ptr : container)
            {
                cout << ptr->GetData() << endl;
                cout << ptr->GetExtraInfo() << endl;
                cout << "--------" << endl;
            }
            system("PAUSE");
            break;
		case 4:
            for (auto const& ptr : container)
            {
                fout << ptr->GetData() << endl;
                fout << ptr->GetExtraInfo() << endl;
                fout << "--------" << endl;
            }
            cout << "Данные сохранены в файл " + fileName << endl;
            system("PAUSE");
            fout.close();
			break;
		default:
			cout << "Введите: 1, 2, 3 или 4!\n\n";
            return 0;
		}
        system("CLS");
	}
    return 0;
}

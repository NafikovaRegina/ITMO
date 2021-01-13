
#include <iostream>
#include <list>
#include <fstream>

using namespace std;

//������� �����
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
        cout << "������� ��� : ";
        cin >> Name;
        cout << "������� ����� : ";
        cin >> Address;
        cout << "������� ������� : ";
        cin >> Phone;
    }
    virtual string GetData()
    {
        string s = "��� : " + Name + "; ����� : " + Address + "; ������� : " + Phone;
        return s;
    }

    virtual string GetExtraInfo() 
    {
        return "";
    }
};

//�������
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
        cout << "������� ������ ��������" << endl;
        Person::InputData();
        cout << "������� �������� �������������: ";
        cin >> NameOfSpecialty;
        Type = "�������";
    }
    string GetData()
    {
        string s = "�������\n" + Person::GetData();
        return s;
    }

    string GetExtraInfo()
    {
        return "�������� �������������: " + NameOfSpecialty;
    }
};

//�������������
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
        cout << "������� ������ �������������" << endl;
        Person::InputData();
        cout << "������� ������ �������: ";
        cin >> AcademicDegree;
        Type = "�������������";
    }
    string GetData()
    {
        string s = "�������������\n" + Person::GetData();
        return s;
    }

    string GetExtraInfo()
    {
        return "������ �������: " + AcademicDegree;
    }
};

typedef unique_ptr<Person> ptr_type;
typedef list<ptr_type> ptr_container_type;

int main()
{
    system("chcp 1251");
    string fileName = "text.txt";
    ptr_container_type container;//��������� �������
	int menuchoice = 0;
    ofstream fout(fileName);
	while (menuchoice != 4)
	{
        cout << "1 - �������� ��������" << endl;
        cout << "2 - �������� �������������" << endl;
        cout << "3 - ������� ������ �����" << endl;
        cout << "4 - ��������� � ���� � �����" << endl;
		cout << "������� 1-5: ";
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
            cout << "������ ��������� � ���� " + fileName << endl;
            system("PAUSE");
            fout.close();
			break;
		default:
			cout << "�������: 1, 2, 3 ��� 4!\n\n";
            return 0;
		}
        system("CLS");
	}
    return 0;
}

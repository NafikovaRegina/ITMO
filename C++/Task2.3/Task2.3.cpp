#include <iostream>

using namespace std;
int main()
{
    system("chcp 1251");
    int nominals[] = { 100, 10, 5, 1 };

    int sum;
    cout << "������� �����: ";
    cin >> sum;
    int i = 0, amount;
    while (sum > 0) {
        if (sum >= nominals[i]) {
            amount = sum / nominals[i];

            cout << nominals[i] << "�. - " << amount << " ��." << endl;
            sum = sum - amount * nominals[i];
            i++;
        }
        else {
            i++;
        }
    }
}
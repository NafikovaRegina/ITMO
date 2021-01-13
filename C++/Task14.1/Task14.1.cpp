#include <iostream>
using namespace std;

//получение среднего значения
template <class Tsource, class Tresult>
void averageArray(Tsource* arr, int arrSize, Tresult& resultAverage) {
    resultAverage = 0;
    for (int i = 0; i < arrSize; ++i) resultAverage += arr[i];
    resultAverage /= arrSize;
}

int main()
{
    double result1;//результат №1
    double a[] = { 1.0, 1.5, 2.25, 3.6, 14.4, 0.72 };//массив №1
    int sizeA = sizeof(a) / sizeof(a[0]);
    averageArray(a, sizeA, result1);

    double result2;//результат №2
    int b[] = { 1, 3, 5, 7 , 9 };//массив №2
    int sizeB = sizeof(b) / sizeof(b[0]);
    averageArray(b, sizeB, result2);

    cout << result1 << endl;
    cout << result2 << endl;

    return 0;
}
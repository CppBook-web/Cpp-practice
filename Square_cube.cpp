#include <iostream>
using namespace std;

double square(double);
double cube(double);

int main()
{
    setlocale(LC_ALL, "rus");
    int num = 0;
 
    cout << "Введите число: "; 
    cin >> num;
    cout << "Квадрат числа: " << num << " = " << square(num) << endl;
    cout << "Куб числа: " << num << " = " << cube(num) << endl;

    return 0;
}

double square(double x)
{
    return x * x;
}

double cube(double x)
{
    return x * x * x;
}
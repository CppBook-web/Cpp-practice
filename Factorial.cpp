#include <iostream>
using namespace std;

void factorial(int n);

int main()
{
    setlocale(LC_ALL, "rus");
    int number = 0;
    cout << "Введите положительное целое число: ";
    cin >> number;

    factorial(number);
    system("pause");
    return 0;
}
void factorial(int n)
{
    unsigned long long factorial = 1.0;

    if (n < 0) 
    {
        cout << "Ошибка! Факториал может быть только положительным числом.\n";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        cout << "Факториал числа " << n << " = " << factorial << "\n";
    }
}
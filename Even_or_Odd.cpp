#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int num = 0;

    cout << "Введите число: ";
    cin >> num;

    if (num % 2 == 0)
        cout << num << " четное число.\n";
    else
        cout << num << " не четное число.\n";

    return 0;
}

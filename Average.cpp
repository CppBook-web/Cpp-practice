#include <iostream>
using namespace std;

const int ArSize = 5;

int main()
{
    setlocale(LC_ALL, "rus");

    double value[ArSize] = {};
    cout << "Вычислить среднее арифметическое.\n";
    cout << "Вы можете ввести до " << ArSize << " значений <q что бы выйти>.\n";
    cout << "#1: ";

    int i = 0;
    while (i < ArSize && cin >> value[i])
    {
        if (++i < ArSize)
        {
            cout << "#" << i + 1 << ": ";
        }
    }

    double total = 0.0;
    for (int j = 0; j < i; j++)
        total += value[j];

    if (i == 0)
        cout << "Нет значений.\n";
    else
        cout << "Среднее арифметическое = " << total / i << "\n";

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int apples = 0;

    cout << "Сколько у тебя яблок?\n";
    cin >> apples;
    cout << "Вот тебе еще три яблока.";
    apples = apples + 3;
    cout << "Теперь у тебя " << apples << " яблок(а).\n";

    return 0;
}
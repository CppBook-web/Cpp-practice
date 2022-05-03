#include <iostream>
using namespace std;

int main()
{    
    setlocale(LC_ALL, "rus");
    int dividend = 0;
    int divisor = 0;
    int quotient = 0;
    int remainder = 0;

    cout << "Введите делимое: ";
    cin >> dividend;

    cout << "Введите делитель: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Частное = " << quotient << "\n";
    cout << "Остаток = " << remainder << "\n";

    return 0;
}
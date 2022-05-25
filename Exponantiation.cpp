#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    double base = 0;
    double exponent = 0;
    double result = 1;

    cout << "Введите число и степень: ";
    cin >> base >> exponent;
    cout << base << "^" << exponent << " = ";
    
    while (exponent != 0) {
        result *= base;
        --exponent;
    }
    cout << result << "\n";

    return 0;
}
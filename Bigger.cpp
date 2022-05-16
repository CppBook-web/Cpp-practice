#include <iostream>
using namespace std;

void bigger(int a, int b);

int main()
{
    setlocale(LC_ALL, "rus");
    int a = 0;
    int b = 0;

    cout << "Введите первое число: "; 
    cin >> a;
    cout << "введите второе число: ";
    cin >> b;
    
    bigger(a, b);

    return 0;
}

void bigger(int a, int b)
{
    if (a > b)
        cout << a << " > " << b << endl;
    else
        cout << b << " > " << a << endl;
}
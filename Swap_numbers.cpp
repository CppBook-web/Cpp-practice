#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int a = 5;
    int b = 10; 
    int temp = 0;

    cout << "До обмена:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nПосле обмена:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
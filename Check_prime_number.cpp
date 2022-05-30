#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int n = 0;
    bool is_prime = true;

    cout << "Введите положительное целое число: ";
    cin >> n;

    if (n == 0 || n == 1)
    {
        cout << "0 и 1 не являются ни простыми, ни составными числами.\n";
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }
    
    if (is_prime)
        cout << n << " - простое число\n";
    else
        cout << n << " - составное число\n";
        
    return 0;
}
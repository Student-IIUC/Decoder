#include <iostream>

using namespace std;

bool is_prime(int num)
{
    for (int i = 2; i <= (num - 1); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int a;
    cout << "Enter a : ";
    cin >> a;
    int b;
    cout << "Enter b : ";
    cin >> b;
    for (int i = a; i <= b; i++)
    {
        if (is_prime(i))
            cout << i << " ";
    }
}

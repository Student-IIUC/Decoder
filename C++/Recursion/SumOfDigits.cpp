#include <iostream>

using namespace std;

int sum_of_digits(int n)
{
    // Base case
    if (n >= 0 and n <= 9)
    {
        return n;
    }
    else
    {
        return sum_of_digits(n / 10) + n % 10;
    }
}

int main()
{
    int n;
    cin >> n;

    cout << sum_of_digits(n) << endl;
}
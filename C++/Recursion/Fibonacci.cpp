#include <iostream>

using namespace std;

int fibo(int n)
{
    // Base case
    if (n < 2)
    {
        return n;
    }

    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main()
{
    int n;
    cin >> n;

    cout << fibo(n) << endl;
}
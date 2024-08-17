#include "bits/stdc++.h"

using namespace std;


void f(long long n, long long &counter)
{
    if (n == 1)
    {
        counter++;
        return;
    }
    counter++;
    if (n % 2 == 0)
        f(n / 2, counter);
    else 
        f(3 * n + 1, counter);
}

int main()
{
    long long n;
    cin >> n;
    long long counter = 0;

    f(n, counter);

    cout << counter;
}
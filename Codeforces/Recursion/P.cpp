#include "bits/stdc++.h"

using namespace std;

int counter = 0;

void f(long long n)
{
    if (n == 1)
        return;
    counter++;
    f(n / 2);
}

int main()
{
    long long n;
    cin >> n;

    f(n);
    cout << counter;
}
#include "bits/stdc++.h"

using namespace std;

void f(int n)
{
    if (n == 0)
        return;
    else if (n == 1)
    {
        cout << n;
        return;
    }
    cout << n << " ";

    f(n-1);
}

int main()
{
    int n;
    cin >> n;

    f(n);
}
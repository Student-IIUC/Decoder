#include "bits/stdc++.h"

using namespace std;

int n;

void f(int r)
{
    if (r == 0) return;
    for (int i = 1; i <= n - r; i++)
    {
        cout << " ";
    }
    for (int i = 1; i <= 2 * r - 1; i++)
    {
        cout << "*";
    }
    cout << endl;
    f(r - 1);
}

int main()
{
    cin >> n;

    f(n);
}
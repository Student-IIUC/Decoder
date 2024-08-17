#include "bits/stdc++.h"

using namespace std;

int n;

void f(int r)
{
    if (r == 0) return;
    f(r - 1);
    for (int i = 1; i <= n - r; i++)
    {
        cout << " ";
    }
    for (int i = 1; i <= 2 * r - 1; i++)
    {
        cout << "*";
    }
    cout << endl;
}

int main()
{
    cin >> n;

    f(n);
}
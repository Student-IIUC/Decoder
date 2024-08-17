#include "bits/stdc++.h"

using namespace std;

void equation(int x, int n)
{
    long long s = pow(x,0) - 1;
    for (int i = 2; i <= n; i += 2)
    {
        s += pow(x,i);
    }
    cout << s;
}

int main()
{
    int x, n;
    cin >> x >> n;

    equation(x, n);
}
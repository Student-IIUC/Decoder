#include "bits/stdc++.h"

using namespace std;

int n;
long long A[100000];

long long f(int i)
{
    if (i == n)
        return 0;

    return A[i] + f(i + 1);
}

int main()
{
    int m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> A[i];

    cout << f(n - m);
}
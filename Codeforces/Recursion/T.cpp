#include "bits/stdc++.h"

using namespace std;

long long nCr(long long n)
{
    if (n < 2)
        return 1;
    return n * nCr(n - 1);
}

int main()
{
    long long n, r;
    cin >> n >> r;

    long long b = nCr(r) * nCr(n - r);
    cout << nCr(n) / b;
}
#include "bits/stdc++.h"

using namespace std;

long long sumOdd(long long n)
{
    long long res = (n + 1) / 2;
    return res * res;
}

long long sumEven(long long n)
{
    return n * (n + 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    unsigned int a, b;
    cin >> a >> b;

    if (a >= b)
        swap(a, b);

    unsigned long long sum2 = sumOdd(b) - sumOdd(a - 1);
    unsigned long long sum1 = sumEven(b / 2) - sumEven((a - 1) / 2);
    cout << sum1 + sum2 << endl;
    cout << sum1 << endl;
    cout << sum2 << endl;
}
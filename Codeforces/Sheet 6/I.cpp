#include <bits/stdc++.h>

using namespace std;

long long sum(long long n)
{
    return (n * (n + 1)) / 2;
} 

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long a, b, x;
    cin >> a >> b >> x;

    if (a > b)
        swap(a, b);

    cout << (sum(b / x) * x) - (sum((a - 1) / x) * x);
}
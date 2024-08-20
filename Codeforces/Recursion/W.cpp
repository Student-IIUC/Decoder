#include "bits/stdc++.h"

using namespace std;

bool reachValue(long long num, long long n)
{
    if (n < num)
        return false;
    else if (n == num)
        return true;

    return reachValue(num * 10, n) || reachValue(num * 20, n);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        if (reachValue(1, n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
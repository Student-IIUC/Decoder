#include "bits/stdc++.h"

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    unsigned int n, k;
    cin >> n >> k;

    long long Min = LONG_LONG_MAX;
    for (int i = 1; i <= n; i++)
    {
        long long x;
        cin >> x;
        Min = min(Min, x);

        if (i % k == 0 || i == n)
        {
            cout << Min << " ";
            Min = LONG_LONG_MAX;
        }
    }
}
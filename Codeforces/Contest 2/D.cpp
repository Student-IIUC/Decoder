#include "bits/stdc++.h"

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        long long l, r;
        cin >> l >> r;

        long long x = min(l, r);
        long long y = max(l, r);

        long long n = y - x + 1;

        cout << (n * (2 * x + (n - 1))) / 2 << "\n";
    }
}
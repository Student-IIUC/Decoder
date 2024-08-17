#include "bits/stdc++.h"

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int divisors = 0;
    for (int i = 1; i <= n; i++)
    {
        long long x;
        cin >> x;

        int divisors1 = 0;
        while (x)
        {
            if (x % 2 == 0)
                divisors1++;
            else 
                break;
            x /= 2;
        }

        divisors = max(divisors1, divisors);
    }

    cout << divisors << endl;
}
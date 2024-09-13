#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long a, b, c, d, gcd, m, lcm;
    cin >> a >> b;
    if (a < b)
    {
        swap(a, b);
    }
    c = a;
    d = b;

    if (a == b)
        gcd = a;
    else
    {
        while (b)
        {
            m = a % b;
            a = b;
            b = m;
        }
        gcd = a;
    }

    lcm = abs(c * d) / gcd;

    cout << gcd << " " << lcm;
}
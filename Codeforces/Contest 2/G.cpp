#include "bits/stdc++.h"

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        unsigned long long n;
        unsigned long long s;
        cin >> n >> s;

        if ((n * (n + 1)) / 2 >= s)
        {
            for (long long i = n; i >= 1; i--)
            {
                if (s >= i)
                {
                    cout << i << " ";
                    s -= i;
                }
            }
        }
        else
        {
            cout << -1;
        }

        cout << endl;
    }
}
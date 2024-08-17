#include "bits/stdc++.h"

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < A.size(); i++)
        {
            cin >> A[i];
        }

        if (n % 2 == 0)
        {
            int even = 0, odd = 0;
            for (int i = 0; i < A.size(); i++)
            {
                if (A[i] % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
            if (even == odd)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << abs(even - odd) / 2 << endl;
            }
        }
        else
            cout << -1 << endl;
    }
}
#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        b.push_back(a[i]);
    }

    int operations = 0, smaller, operations2 = 1;
    b[0] *= -1;
    for (int i = 0; i < n - 1; ++i)
    {
        if ((a[i] > 0 && a[i + 1] > 0) || (a[i] < 0 && a[i + 1] < 0))
        {
            // Change the sign of the smaller absolute value
            a[i + 1] *= -1;
            ++operations;
        }
        if ((b[i] > 0 && b[i + 1] > 0) || (b[i] < 0 && b[i + 1] < 0))
        {
            // Change the sign of the smaller absolute value
            b[i + 1] *= -1;
            ++operations2;
        }
    }

    if (operations < operations2)
    {
        cout << operations << endl;
    }
    else 
    {
        cout << operations2 << endl;
    }
}

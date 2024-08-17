#include "bits/stdc++.h"

using namespace std;

void f(int n)
{
    if (n <= 0) return;
    f(n / 10);
    cout << n % 10 << " ";
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            cout << "0\n";
            continue;
        }
        f(n);
        cout << endl;
    }
}
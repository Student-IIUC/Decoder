#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    unsigned int x;
    string n;

    cin >> n >> x;

    long long res = 0;

    for (unsigned int i{}; i < n.size(); i++)
    {
        res *= 10;
        res += n[i] - '0';
        res %= x;
    }

    if (res == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}
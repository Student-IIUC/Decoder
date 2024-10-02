#include <bits/stdc++.h>

using namespace std;

long long ncr(int a, int b)
{
    double sum{1};
    for (int i{1}; i <= b; i++)
    {
        sum = sum * (a - b + i) / i;
    }

    return (long long)sum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for (int i{}; i < n; i++)
    {
        for (int j{}; j <= i; j++)
        {
            cout << ncr(i, j) << " ";
        }
        cout << endl;
    }
}
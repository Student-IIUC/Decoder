#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, r;
    cin >> n >> r;
    double sum{1}, fact{1};
    for (int i{1}; i <= r; i++)
    {
        sum = sum * (n - r + i) / i;
        fact *= i;
    }
    
    cout << (int)sum << " " << (int)sum * (long long)fact;
    
}
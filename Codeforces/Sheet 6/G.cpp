#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int n;
    cin >> n;

    long long int sum{};
    for (long long int i{1}; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != sqrt(n))
            {
                sum += n / i;
            }
        }
    }

    cout << sum << endl;
}
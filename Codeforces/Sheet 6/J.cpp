#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;

    unsigned int count, check{};
    // while (n % 2 == 0)
    // {
    //     count++;
    //     n /= 2;
    // }
    // if (count)
    //     cout << "(2^" << count << ")";

    for (auto i = 2; i <= n / 2; i++)
    {
        if (n == 1)
            break;
        count = {};
        while (n % i == 0)
        {
            count++;
            n /= i;
        }
        if (count && check)
        {
            cout << "*";
        }

        if (count)
        {
            cout << "(" << i << "^" << count << ")";
            check = 1;
        }

    }

    if (n > 1)
    {
        if (check)
            cout << "*(" << n << "^1)" << endl;
        else
            cout << "(" << n << "^1)" << endl;
    }
}
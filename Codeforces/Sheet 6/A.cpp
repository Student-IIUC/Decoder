#include "bits/stdc++.h"

using namespace std;

bool power_of_two(long long num)
{
    return (num && !(num & num - 1));
}

int main()
{
    long long num;
    cin >> num;

    if (power_of_two(num))
        cout << "YES\n";
    else
        cout << "NO\n";
}
#include "bits/stdc++.h"

using namespace std;

int decimal_to_binary(int num)
{
    int mul = 1, rem, ans = 0;
    while (num > 0)
    {
        // reminder
        rem = num & 1;
        // quotient
        num = num >> 1;
        // ans
        ans += rem * mul;
        // multiply
        mul *= 10;
    }

    return ans;
}

int binary_to_decimal(int num)
{
    int mul = 1, rem, ans = 0;
    while (num)
    {
        rem = num & 1;
        num /= 10;
        ans += mul * rem;
        mul *= 2;
    }

    return ans;
}

int main()
{
    int num;
    cout << "Enter a number to convert :";
    cin >> num;

    // cout << decimal_to_binary(num) << endl;

    cout << binary_to_decimal(num) << endl;
}
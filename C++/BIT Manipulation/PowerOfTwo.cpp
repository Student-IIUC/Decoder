#include "bits/stdc++.h"

using namespace std;

bool power_of_two(int num)
{
    return (num && !(num & num - 1));
}

int main()
{
    int num;
    cin >> num;

    cout << power_of_two(num) << endl;
}
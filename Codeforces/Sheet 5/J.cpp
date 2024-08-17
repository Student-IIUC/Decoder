#include "bits/stdc++.h"

using namespace std;

void average(int n)
{
    double sum = 0.0, value;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        sum += value;
    }
    cout << fixed << setprecision(7) << sum / n;
}

int main()
{
    int n;
    cin >> n;

    average(n);
}
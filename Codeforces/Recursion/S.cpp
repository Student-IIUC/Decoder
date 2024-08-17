#include "bits/stdc++.h"

using namespace std;

int n;

double avg(long long A[], int i)
{
    if (i == n)
        return 0;
    return A[i] + avg(A, i + 1);
}

int main()
{
    cin >> n;
    long long A[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];

    cout << fixed << setprecision(6) << avg(A, 0) / n;
}
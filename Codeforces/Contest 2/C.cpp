#include "bits/stdc++.h"

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, k;
    cin >> n >> k;
    vector<long long> A(n);
    for (int i = 0; i < A.size(); i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < A.size();)
    {
        long long mn = INT_MAX;
        for (int j = i; j < min(i + k, n); j++)
        {
            mn = min(mn, A[j]);
        }
        cout << mn << " ";
        i += k;
    }
}
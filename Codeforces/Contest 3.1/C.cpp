#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<long long> A(n);
    for (int i = 0; i < A.size(); i++)
    {
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    reverse(A.begin(), A.end());

    long long max_sum = 0;

    for (int  i = 0; i < k; i++)
    {
        if (A[i] < 0)
        {
            break;
        }
        max_sum += A[i];
    }
    cout << max_sum;
}
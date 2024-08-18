#include "bits/stdc++.h"

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    cin >> n >> q;

    vector<long long> A(n), B;
    for (int i = 0; i < A.size(); i++)
    {
        cin >> A[i];
        if (i == 0) B.push_back(A[i]);
        else B.push_back(A[i] + B[i - 1]);
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        l--; r--;
        long long sum = B[r] - B[l] + A[l];
        cout << sum << endl;
    }
}
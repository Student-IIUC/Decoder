#include "bits/stdc++.h"

using namespace std;

void leftMax(vector<long long> &A, vector<long long> &B, int i, long long mx)
{
    if (i == A.size()) return;

    mx = max(mx, A[i]);
    B.push_back(mx);
    leftMax(A, B, i + 1, mx);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<long long> A(n), B;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    
    long long mx = LONG_LONG_MIN;

    leftMax(A, B, 0, mx);

    for (long long ele : B)
        cout << ele << " ";
}
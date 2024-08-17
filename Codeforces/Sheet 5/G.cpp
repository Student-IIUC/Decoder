#include "bits/stdc++.h"

using namespace std;

void min_max(int A[], int n)
{
    int mn = INT_MAX;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mn = min(mn, A[i]);
        mx = max(mx, A[i]);
    }
    cout << mn << " " << mx;
}

int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];
    
    min_max(A, n);
}
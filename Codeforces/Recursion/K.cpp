#include "bits/stdc++.h"

using namespace std;

void f(int A[], int n, int i, int &mx)
{
    if (i == n)
        return;
    
    if (A[i] > mx)
    {
        mx = A[i];
        f(A, n, i + 1, mx);
    }
    else
        f(A, n, i + 1, mx);
}

int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];

    int mx = INT_MIN;
    f(A, n, 0, mx);

    cout << mx;
}
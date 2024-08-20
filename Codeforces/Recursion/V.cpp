#include "bits/stdc++.h"

using namespace std;

bool expression(int A[], int n, long long sum, long long x, int i)
{
    if (i == n)
        return sum == x;
    
    return expression(A, n, sum + A[i], x, i + 1) || expression(A, n, sum - A[i], x, i + 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; long long x;
    cin  >> n >> x;

    int A[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];
    
    if (expression(A, n, A[0], x, 1))
        cout << "YES\n";
    else
        cout << "NO\n";
}
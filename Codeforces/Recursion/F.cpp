#include "bits/stdc++.h"

using namespace std;

void f(int A[], int n, int i)
{
    if (i == n)
        return;
    if (i % 2 == 0)
    {
        f(A, n, i + 1);
        cout << A[i] << " ";
        return;
    }
    f(A, n, i + 1);
}

int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];

    f(A, n, 0);
}
#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    long long A[n][m];
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            cin >> A[row][col];
        }
    }

    for (int row = 0; row < n; row++)
    {
        for (int col = m - 1; col >= 0; col--)
        {
            cout << A[row][col] << " ";
        }cout << endl;
    }
}
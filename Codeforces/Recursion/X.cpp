#include "bits/stdc++.h"

using namespace std;

int maxPath(vector<vector<int>> &A, int row, int col)
{
    if (row == A.size() - 1 && col == A[0].size() - 1)
        return A[row][col];
    else if (row == A.size() || col == A[0].size())
        return INT_MIN;
    int right = maxPath(A, row, col + 1);
    int down = maxPath(A, row + 1, col);
    return A[row][col] + max(right, down);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> A(n, vector<int>(m));
    for (int row = 0; row < n; row++)
        for (int col = 0; col < m; col++)
            cin >> A[row][col];

    cout << maxPath(A, 0, 0) << endl;
}
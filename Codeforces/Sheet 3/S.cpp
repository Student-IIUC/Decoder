#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int A[n][m];
    for (int row = 0; row < n; row++)
        for (int col = 0; col < m; col++)
            cin >> A[row][col];
    int x;
    cin >> x;
    bool check = false;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            if (A[row][col] == x)
            {
                check = true;
                break;
            }
        }
    }
    if (check)
        cout << "will not take number";
    else 
        cout << "will take number";
}
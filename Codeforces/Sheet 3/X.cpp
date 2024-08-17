#include "bits/stdc++.h"

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<vector<char>> A(n, vector<char>(m));
    for (int row = 0; row < A.size(); row++)
    {
        for (int col = 0; col < A[row].size(); col++)
        {
            cin >> A[row][col];
        }
    }
    int x, y;
    cin >> x >> y;
    x--;
    y--;

    if (x == 0 && y == 0)
    {
        if (A[x + 1][y] == 'x' && A[x + 1][y + 1] == 'x' && A[x][y + 1] == 'x')
            cout << "yes\n";
        else
            cout << "no\n";
    }

    else if (x == n - 1 && y == m - 1)
    {
        if (A[x - 1][y] == 'x' && A[x - 1][y - 1] == 'x' && A[x][y - 1] == 'x')
            cout << "yes\n";
        else
            cout << "no\n";
    }

    else if (x == n - 1 && y == 0)
    {
        if (A[x][y + 1] == 'x' && A[x - 1][y] == 'x' && A[x - 1][y + 1] == 'x')
            cout << "yes\n";
        else
            cout << "no\n";
    }

    else if (x == 0 && y == m - 1)
    {
        if (A[x][y - 1] == 'x' && A[x + 1][y] == 'x' && A[x + 1][y - 1] == 'x')
            cout << "yes\n";
        else
            cout << "no\n";
    }

    else if (x == 0)
    {

        if (A[x + 1][y] == 'x' && A[x][y + 1] == 'x' && A[x][y - 1] == 'x' && A[x + 1][y + 1] == 'x' && A[x + 1][y - 1] == 'x')
            cout << "yes\n";
        else
            cout << "no\n";
    }

    else if (x == n - 1)
    {
        if (A[x - 1][y - 1] == 'x' && A[x][y - 1] == 'x' && A[x][y + 1] == 'x' && A[x - 1][y] == 'x' && A[x - 1][y + 1] == 'x')
            cout << "yes\n";
        else
            cout << "no\n";
    }

    else if (y == 0)
    {
        if (A[x - 1][y] == 'x' && A[x + 1][y] == 'x' && A[x - 1][y + 1] == 'x' && A[x][y + 1] == 'x' && A[x + 1][y + 1] == 'x')
            cout << "yes\n";
        else
            cout << "no\n";
    }

    else if (y == m - 1)
    {
        if (A[x + 1][y] == 'x' && A[x - 1][y] == 'x' && A[x - 1][y - 1] == 'x' && A[x + 1][y - 1] == 'x' && A[x][y - 1] == 'x')
            cout << "yes\n";
        else
            cout << "no\n";
    }

    else
    {
        if (A[x - 1][y - 1] == 'x' && A[x - 1][y + 1] == 'x' && A[x - 1][y] == 'x' && A[x + 1][y - 1] == 'x' && A[x + 1][y + 1] == 'x' && A[x + 1][y] == 'x' && A[x][y + 1] == 'x' && A[x][y - 1] == 'x')
            cout << "yes\n";
        else
            cout << "no\n";
    }
}
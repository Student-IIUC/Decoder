#include "bits/stdc++.h"

using namespace std;

int r, c;
int A[100][100], B[100][100], Result[100][100];

void f(int r1, int c1)
{
    if (r1 == r || c1 == c)
        return;
    if (c1 < c - 1)
        f(r1, c1 + 1);
    else
        f(r1 + 1, 0);
    Result[r1][c1] = A[r1][c1] + B[r1][c1];
}

int main()
{
    cin >> r >> c;

    for (int row = 0; row < r; row++)
        for (int col = 0; col < c; col++)
            cin >> A[row][col];
    for (int row = 0; row < r; row++)
        for (int col = 0; col < c; col++)
            cin >> B[row][col];

    f(0, 0);

    for (int row = 0; row < r; row++)
    {
        for (int col = 0; col < c; col++)
        {
            cout << Result[row][col] << " ";
        }
        cout << endl;
    }
}
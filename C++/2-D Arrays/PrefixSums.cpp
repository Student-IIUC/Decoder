#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int A[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }

    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    int sum = 0;
    for (int row = l1; row <= l2; row++)
    {
        for (int col = r1; col <= r2; col++)
        {
            sum += A[row][col];
        }
    }

    cout << sum << endl;
}
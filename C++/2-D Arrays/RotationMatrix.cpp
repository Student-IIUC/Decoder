#include <iostream>

using namespace std;

// Matrix rotated by 90 degree.

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

    cout << "After rotating 90 degree :" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            cout << A[j][i] << " ";
        }
        cout << endl;
    }
}
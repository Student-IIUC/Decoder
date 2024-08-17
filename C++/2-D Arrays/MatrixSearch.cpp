#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int target;
    cin >> target;
    int A[n][m];
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            cin >> A[row][col];
        }
    }

    int r = 0, c = m - 1;
    bool found = false;
    while (r < n and c >= 0)
    {
        if (A[r][c] == target)
        {
            found = true;
        }
        else if (A[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (found)
    {
        cout << "Element found." << endl;
    }
    else
    {
        cout << "Element does not exist." << endl;
    }
}
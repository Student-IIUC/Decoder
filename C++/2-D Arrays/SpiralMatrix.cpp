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

    int left = 0;
    int right = m - 1;
    int top = 0;
    int bottom = n - 1;

    int direction = 0;

    while (left <= right and top <= bottom)
    {
        // left -> right
        if (direction == 0)
        {
            for (int col = left; col <= right; col++)
            {
                cout << A[top][col] << " ";
            }
            top++;
        }
        // top -> bottom
        else if (direction == 1)
        {
            for (int row = top; row <= bottom; row++)
            {
                cout << A[row][right] << " ";
            }
            right--;
        }
        // right -> left
        else if (direction == 2)
        {
            for (int col = right; col >= left; col--)
            {
                cout << A[bottom][col] << " ";
            }
            bottom--;
        }
        // bottom -> top
        else
        {
            for (int row = bottom; row >= top; row--)
            {
                cout << A[row][left] << " ";
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }
}
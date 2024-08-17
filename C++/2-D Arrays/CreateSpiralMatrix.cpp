#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int A[n][n];

    int left = 0;
    int right = n - 1;
    int top = 0;
    int bottom = n - 1;
    int direction = 0;
    int value = 1;

    while (top <= bottom and left <= right)
    {
        if (direction == 0)
        {
            for (int col = left; col <= right; col++)
            {
                A[top][col] = value++;
            }
            top++;
        }
        else if (direction == 1)
        {
            for (int row = top; row <= bottom; row++)
            {
                A[row][right] = value++;
            }
            right--;
        }
        else if (direction == 2)
        {
            for (int col = right; col >= left; col--)
            {
                A[bottom][col] = value++;
            }
            bottom--;
        }
        else
        {
            for (int row = bottom; row >= top; row--)
            {
                A[row][left] = value++;
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
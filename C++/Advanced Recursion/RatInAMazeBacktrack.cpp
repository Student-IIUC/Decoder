#include <iostream>

using namespace std;

bool is_safe(int **arr, int row, int col, int n)
{
    if (row < n && col < n && arr[row][col])
        return true;
    return false;
}

bool rat_in_maze(int **arr, int row, int col, int n, int **solArr)
{
    // Base case
    if (row == n - 1 && col == n - 1)
    {
        solArr[row][col] = 1;
        return true;
    }
    // Self work
    if (is_safe(arr, row, col, n))
    {
        solArr[row][col] = 1;
        if (rat_in_maze(arr, row + 1, col, n, solArr))
            return true;
        if (rat_in_maze(arr, row, col + 1, n, solArr))
            return true;
        solArr[row][col] = 0; // Backtracking
        return false;
    }
    return false;
}

// Sample input
// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1

int main()
{
    int n;
    cin >> n;

    int **arr = new int *[n];   // Dynamic allocation
    for (int i = 0; i < n; i++) // For each 1-D array memory alocated
        arr[i] = new int[n];

    for (int row = 0; row < n; row++)
        for (int col = 0; col < n; col++)
            cin >> arr[row][col];

    int **solArr = new int *[n]; // Dynamic allocation
    // Initialiizing an 2-D array by dynamic memory allocation
    for (int row = 0; row < n; row++)
    {
        solArr[row] = new int[n];
        for (int col = 0; col < n; col++)
            solArr[row][col] = 0;
    }

    rat_in_maze(arr, 0, 0, n, solArr);

    cout << endl;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
            cout << solArr[row][col] << " ";
        cout << endl;
    }
}
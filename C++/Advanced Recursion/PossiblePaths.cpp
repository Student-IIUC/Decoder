#include <iostream>

using namespace std;

int no_of_ways(int i, int j, int row, int col)
{
    // Base case
    if (i == row - 1 && j == col - 1)
        return 1;
    else if (i >= row || j >= col)
        return 0;
    // Assumption
    return no_of_ways(i, j + 1, row, col) + no_of_ways(i + 1, j, row, col);
}

int main()
{
    int row, col;
    cin >> row >> col;

    cout << no_of_ways(0, 0, row, col) << endl;
}
#include <iostream>

using namespace std;

int count_path_maze(int n, int i, int j)
{
    // Base case
    if (i == n - 1 && j == n - 1)
        return 1;
    else if (i >= n || j >= n)
        return 0;
    // Asumption
    return count_path_maze(n, i + 1, j) + count_path_maze(n, i, j + 1);
}

int main()
{
    int n;
    cin >> n;

    cout << count_path_maze(n, 0, 0) << endl;
}
#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n][n];
    for (int row = 0; row < n; row++)
        for (int col = 0; col < n; col++)
            cin >> A[row][col];

    int main_diagonal_sum = 0;
    int secondary_diagonal_sum = 0;
    for (int row = 0; row < n; row++)
    {
       main_diagonal_sum += A[row][row];
       secondary_diagonal_sum += A[row][n - 1 - row];
    }
    int absolute_difference = abs(main_diagonal_sum - secondary_diagonal_sum);
    cout << absolute_difference;
}
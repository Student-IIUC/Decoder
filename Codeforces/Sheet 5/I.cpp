#include "bits/stdc++.h"

using namespace std;

int N;
int A[510][510];

void swapping_with_matrix(int X, int Y)
{
    for (int col = 0; col < N; col++)
    {
        swap(A[X - 1][col], A[Y - 1][col]);
    }
    for (int row = 0; row < N; row++)
    {
        swap(A[row][X - 1], A[row][Y - 1]);
    }
}

int main()
{
    int X, Y;
    cin >> N >> X >> Y;

    for (int row = 0; row < N; row++)
        for (int col = 0; col < N; col++)
            cin >> A[row][col];

    swapping_with_matrix(X, Y);

    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N; col++)
        {
            cout << A[row][col] << " ";
        }
        cout << endl;
    }
}
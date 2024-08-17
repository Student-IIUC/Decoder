#include "bits/stdc++.h"

using namespace std;

// Function to swap rows
void swapRows(vector<vector<int>>& matrix, int X, int Y) {
    swap(matrix[X], matrix[Y]);
}

// Function to swap columns
void swapColumns(vector<vector<int>>& matrix, int X, int Y) {
    for (int i = 0; i < matrix.size(); ++i) {
        swap(matrix[i][X], matrix[i][Y]);
    }
}

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    X--; // Adjusting for 0-based indexing
    Y--; // Adjusting for 0-based indexing

    vector<vector<int>> matrix(N, vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
    }

    swapRows(matrix, X, Y);
    swapColumns(matrix, X, Y);

    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}

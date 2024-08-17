#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long id;
    cin >> id;

    int rows = 5;
    int cols = 4;
    vector<vector<long long>> A(rows, vector<long long>(cols));

    long long k = 0;
    for (int row = 0; row < rows; row++)
    {
        if (row % 2)
        {
            for (int col = 0; col < cols; col++)
            {
                A[row][col] = k++;

                if (A[row][col] == id)
                {
                    cout << row << " " << col << endl;
                    return 0;
                }
            }
        }
        else
        {
            for (int col = cols - 1; col >= 0; col--)
            {
                A[row][col] = k++;

                if (A[row][col] == id)
                {
                    cout << row << " " << col << endl;
                    return 0;
                }
            }
        }
    }

    cout << "Element not found." << endl;
    return 0;
}

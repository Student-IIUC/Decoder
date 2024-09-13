#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int r1, c1, r2, c2;
    cin >> r1 >> c1;
    vector<vector<int>> A(r1, vector<int>(c1));
    for (int row{}; row < A.size(); row++)
        for (int col{}; col < A[0].size(); col++)
            cin >> A[row][col];

    cin >> r2 >> c2;
    vector<vector<int>> B(r2, vector<int>(c2));
    for (int row{}; row < B.size(); row++)
        for (int col{}; col < B[0].size(); col++)
            cin >> B[row][col];

    vector<vector<int>> Result(r1, vector<int>(c2));

    for (int row{}; row < Result.size(); row++)
    {
        for (int col{}; col < Result[0].size(); col++)
        {
            Result[row][col] = 0;
            for (int k{}; k < c1; k++)
            {
                Result[row][col] += A[row][k] * B[k][col];
            }
        }
    }

    for (int row{}; row < Result.size(); row++)
    {
        for (int col{}; col < Result[0].size(); col++)
        {
            cout << Result[row][col] << " ";
        }
        cout << endl;
    }
}
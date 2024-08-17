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

    int maxOnes = INT_FAST32_MIN;
    int maxOnesRow = -1;
    int columns = m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i][j] == 1)
            {
                int numberOfOnes = columns - j;
                if (numberOfOnes > maxOnes)
                {
                    maxOnes = numberOfOnes;
                    maxOnesRow = i;
                }
                break;
            }
        }
    }

    cout << "Max 1's are in " << maxOnesRow << "th row." << endl;
}
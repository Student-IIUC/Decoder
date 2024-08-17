#include "bits/stdc++.h"

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;

    float start, stop;
    start = clock();
    int mid = N / 2 + 1;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i == mid && j == mid)
            {
                cout << 'X';
            }

            else if (i == j)
            {
                cout << "\\";
            }

            else if (i + j == N + 1)
            {
                cout << '/';
            }

            else
                cout << '*';
        }
        cout << endl;
    }
    stop = clock();
    cout << (float)stop - start << endl;
}
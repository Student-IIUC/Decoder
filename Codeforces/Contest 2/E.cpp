#include "bits/stdc++.h"

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long id;
    cin >> id;

    long long row = id / 4, col;

    if (row % 2 == 0)
    {
        col = id % 4;
    }
    else 
        col = 3 - (id % 4);

    cout << row << " " << col << endl;
}
#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int count[m + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        ++count[num];
    }

    for (int i = 1; i <= m; i++)
    {
        cout << count[i] << endl;
    }
}
#include "bits/stdc++.h"

using namespace std;

int knapSack(int wt[], int value[], int n, int w)
{
    if (n == 0 || w == 0)
        return 0;
    else if (wt[n - 1] > w)
        return knapSack(wt, value, n - 1, w);
    return max(knapSack(wt, value, n - 1, w - wt[n - 1]) + value[n - 1], knapSack(wt, value, n - 1, w));
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, w;
    cin >> n >> w;

    int wt[n], value[n];
    for (int i = 0; i < n; i++)
        cin >> wt[i] >> value[i];

    cout << knapSack(wt, value, n, w) << endl;
}
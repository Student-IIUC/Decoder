#include "bits/stdc++.h"

using namespace std;

// Recursive function to compute NCR
long long nCr(int N, int R)
{
    if (R == 0 || R == N)
        return 1; // Base cases: NCR = 1 when R is 0 or R is N

    // Recursive relation: NCR = NCR(N-1, R-1) + NCR(N-1, R)
    return nCr(N - 1, R - 1) + nCr(N - 1, R);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, R;
    cin >> N >> R;
    if (N < R)
        cout << 0 << endl;
    else
        cout << nCr(N, R) << endl;
}
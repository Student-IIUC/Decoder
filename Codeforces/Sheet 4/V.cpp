#include "bits/stdc++.h"

using namespace std;

int main()
{
    string S;
    cin >> S;

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == 'E' && S[i + 1] == 'G' && S[i + 2] == 'Y' && S[i + 3] == 'P' && S[i + 4] == 'T')
        {
            S.replace(i, 5, " ");
        }
    }
    cout << S;
}
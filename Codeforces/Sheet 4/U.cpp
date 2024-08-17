#include "bits/stdc++.h"

using namespace std;

int main()
{
    string S;
    cin >> S;

    transform(S.begin(), S.end(), S.begin(), ::toupper);

    int countE = 0, countG = 0, countY = 0, countP = 0, countT = 0;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == 'E')
            countE++;
        else if (S[i] == 'G')
            countG++;
        else if (S[i] == 'Y')
            countY++;
        else if (S[i] == 'P')
            countP++;
        else if (S[i] == 'T')
            countT++;
    }

    cout << min({countE, countG, countY, countP, countT});
}
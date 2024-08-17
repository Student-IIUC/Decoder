#include "bits/stdc++.h"

using namespace std;

int main()
{
    int N;
    string S;
    cin >> N; 
    cin >> S;

    int Total_Score = 0;
    char ch;
    int i = 0;
    while (i < S.size())
    {
        ch = S[i];
        switch (ch)
        {
        case 'V':
            Total_Score += 5;
            break;
        case 'W':
            Total_Score += 2;
            break;
        case 'X':
            if (i != S.size() - 1)
                S[i + 1] = '0';
            break;
        case 'Y':
            if (i != S.size() - 1)
            {
                S.push_back(S[i + 1]);
                S[i + 1] = '0';
            }
            break;
        case 'Z':
            if (i != S.size() - 1)
            {
                if (S[i + 1] == 'V')
                {
                    Total_Score /= 5;
                    S[i + 1] = '0';
                }
                else if (S[i + 1] == 'W')
                {
                    Total_Score /= 2;
                    S[i + 1] = '0';
                }
            }
            break;
        }
        i++;
    }
    cout << Total_Score;
}
#include "bits/stdc++.h"

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string S;
    int open = 1;
    while (getline(cin, S))
    {
        if (S.size() == 0 || S == " ")
        {
            continue;
        }
        bool flag = 0;
        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] == '/' && S[i + 1] == '/' && open)
            {
                break;
            }

            else if (S[i] == '/' && S[i + 1] == '*')
            {
                i++;
                open = 0;
            }

            else if (S[i] == '*' && S[i + 1] == '/' && !open)
            {
                i++;
                open = 1;
            }

            else if (open)
            {
                cout << S[i];
                flag = 1;
            }
        }
        if (flag && open)
        {
            cout << endl;
        }
    }
    return 0;
}
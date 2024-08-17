#include "bits/stdc++.h"

using namespace std;

int main()
{
    string S, A;
    cin >> S;

    vector <string> C;
    int count = 0, r = 0, l = 0;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == 'L')
        {
            A.push_back(S[i]);
            l++;
        }
        else if (S[i] == 'R')
        {
            A.push_back(S[i]);
            r++;
        }
        if (r == l && l > 0)
        {
            count++;
            l = 0;
            r = 0;
            C.push_back(A);
            A.clear();
        }
    }
    cout << count << endl;
    for (string str : C)
    {
        cout << str << endl;
    }
}
#include "bits/stdc++.h"

using namespace std;

int main()
{
    string S;
    cin >> S;

    string D = S, str1 = "", str2, smallString = S;
    for (int i = 0; i < S.size() - 1; i++)
    {
        str1 += S[i];
        sort(str1.begin(), str1.end());
        D.erase(0,1);
        str2 = D;
        sort(str2.begin(), str2.end());
        smallString = min(smallString, str1 + str2);
    }
    cout << smallString << endl;
}
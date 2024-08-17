#include "bits/stdc++.h"

using namespace std;

int main()
{
    string S;
    bool check = false;

    while (cin >> S)
    {
        reverse(S.begin(), S.end());
        if (check)
            cout << " ";
        check = true;
        cout << S;
    }
}
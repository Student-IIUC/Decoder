#include "bits/stdc++.h"

using namespace std;

int main()
{
    string S;
    getline(cin, S);

    int count = 1;
    // bool check = true;

    for (int i = 1; i < S.size(); i++)
    {
        if (!(S[i] >= 'A' && S[i] <= 'z') && S[i + 1] >= 'A' && S[i + 1] <= 'z')
            count++;
        else 
            continue;
    }
    cout << count << endl;
}
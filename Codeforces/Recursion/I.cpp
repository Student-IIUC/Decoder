#include "bits/stdc++.h"

using namespace std;

void f(string S, int i, int &count)
{
    if (i == S.length()) return;
    if (S[i] == 'a' || S[i] == 'A' || S[i] == 'e' || S[i] == 'E' || S[i] == 'i' || S[i] == 'I' || S[i] == 'o' || S[i] == 'O' || S[i] == 'u' || S[i] == 'U')
    {
        count++;
        f(S, i + 1, count);
    }
    else 
        f(S, i + 1, count);
}

int main()
{
    string S;
    getline(cin, S);
    
    int count = 0;
    f(S, 0, count);

    cout << count << endl;
}
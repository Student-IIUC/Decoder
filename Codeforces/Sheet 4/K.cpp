#include "bits\stdc++.h"

using namespace std;

int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        string S, T;
        cin >> S >> T;
        bool check1 = true, check2 = true;
        for (int i = 0; i < S.size() + T.size(); i++)
        {
            if (S.size() != i && check1)
                cout << S[i];
            else
                check1 = false;
            if (T.size() != i && check2)
                cout << T[i];
            else
                check2 = false;
        }
        cout << endl;
    }
}
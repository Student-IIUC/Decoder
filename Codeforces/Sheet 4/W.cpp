#include "bits/stdc++.h"

using namespace std;

int main()
{
    int Q;
    cin >> Q;
    string S;
    cin >> S;

    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    // Encryption
    if (Q == 1)
    {
        for (int i = 0; i < S.size(); i++)
        {
            int j;
            for (j = 0; j < original.size(); j++)
            {
                if (S[i] == original[j])
                {
                    break;
                }
            }
            cout << key[j];
        }
    }
    else 
    {
        for (int i = 0; i < S.size(); i++)
        {
            int j;
            for (j = 0; j < original.size(); j++)
            {
                if (S[i] == key[j])
                {
                    break;
                }
            }
            cout << original[j];
        }
    }
}
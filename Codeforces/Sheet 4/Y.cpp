#include "bits/stdc++.h"

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string S;
    cin >> S;
    vector<int> A(125);
    for (int i = 'a'; i <= 'z'; i++)
    {
        cin >> A[i];
    }

    // this for loop is for "?????????"
    bool check = true;

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == '?')
        {
            continue;
        }
        else
        {
            check = false;
            break;
        }
    }
    if (check)
    {
        cout << 0 << endl;
        for (int i = 0; i < S.size(); i++)
        {
            cout << 'a';
        }
        return 0;
    }

    // this if is for "?????snjsn"
    if (S[0] == '?')
    {
        char right; int end;
        for (int i = 1; i < S.size(); i++)
        {
            if (S[i] == '?')
            {
                continue;
            }
            else
            {
                right = S[i];
                end = i - 1;
                break;
            }
        }
        int cost, mn = INT_MAX; char ch;
        for (int i = 'a'; i <= 'z'; i++)
        {
            cost = abs(A[i] - A[right]);
            if (mn > cost)
            {
                mn = cost;
                ch = i;
            }
        }

        for (int i = 0; i <= end; i++)
        {
            S[i] = ch;
        }
    }

    // this if is for "absbs????"
    if (S[S.size() - 1] == '?')
    {
        char left; int end;
        for (int i = S.size() - 2; i >= 0; i--)
        {
            if (S[i] == '?')
            {
                continue;
            }
            else
            {
                left = S[i];
                end = i + 1;
                break;
            }
        }
        int cost, mn = INT_MAX; char ch;
        for (int i = 'a'; i <= 'z'; i++)
        {
            cost = abs(A[i] - A[left]);
            if (mn > cost)
            {
                mn = cost;
                ch = i;
            }
        }

        for (int i = S.size() - 1; i >= end; i--)
        {
            S[i] = ch;
        }
    }

    // this for loop is for "anjsnk???mas???akjn"
    for (int i = 1; i < S.size() - 1; i++)
    {
        if (S[i] == '?')
        {
            char right, left = S[i - 1]; int end;
            for (int st = i + 1; st < S.size(); st++)
            {
                if (S[st] == '?')
                {
                    continue;
                }
                else 
                {
                    right = S[st];
                    end = st - 1;
                    break;
                }
            }
            int cost, mn = INT_MAX; char ch;
            for (int j = 'a'; j <= 'z'; j++)
            {
                cost = abs(A[left] - A[j]) + abs(A[j] - A[right]);
                if (mn > cost)
                {
                    mn = cost;
                    ch = j;
                }
            }
            for (int st = i; st <= end; st++)
            {
                S[st] = ch;
            }
        }
    }
    long long cost = 0;
    for (int i = 0; i < S.size() - 1; i++)
    {
        cost += abs(A[S[i]] - A[S[i + 1]]);
    }
    cout << cost << endl;
    cout << S << endl;
}
#include "bits/stdc++.h"

using namespace std;

bool permutation_check(long long a, vector<long long> &B)
{
    for (int i = 0; i < B.size(); i++)
    {
        if (B[i] == a)
        {
            B.erase(B.begin() + i);
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<long long> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];

    vector<long long> B(n);
    for (int i = 0; i < n; i++)
        cin >> B[i];
    bool check;
    for (int i = 0; i < A.size(); i++)
    {
        check = false;
        if (permutation_check(A[i], B))
            check = true;
        else
            break;
    }

    if (check)
        cout << "yes";
    else
        cout << "no";
}
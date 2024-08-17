#include "bits/stdc++.h"

using namespace std;

void shifting(vector <int> &A, int n, int x)
{
    x %= n;
    if (x == n)
    {
        for (int ele : A)
            cout << ele << " ";
    }
    else 
    {
        for (int i = 0; i < A.size() - x; i++)
        {
            A.push_back(A[0]);
            A.erase(A.begin());
        }
        for (int ele : A)
            cout << ele << " ";
    }
}

int main()
{
    int n, x;
    cin >> n >> x;
    vector <int> A(n);
    for (int i = 0; i < A.size(); i++)
    {
        cin >> A[i];
    }

    shifting(A, n, x);
}
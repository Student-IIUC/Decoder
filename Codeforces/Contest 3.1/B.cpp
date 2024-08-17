#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> A(n);
    for (int i = 0; i < A.size(); i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == 0)
        {
            reverse(A.begin(), A.begin() + i);
        }
    }

    for (int ele : A)
    {
        cout << ele << " ";
    }
}
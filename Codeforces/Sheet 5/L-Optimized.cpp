#include "bits/stdc++.h"

using namespace std;

void New_Array(vector <int> &A, vector <int> &B)
{
    vector <int> merged(A.size() + B.size());

    merge(B.begin(), B.end(), A.begin(), A.end(), merged.begin());
    for (int ele : merged)
    {
        cout << ele << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    vector <int> A(n);
    for (int i = 0; i < A.size(); i++)
    {
        cin >> A[i];
    }
    vector <int> B(n);
    for (int i = 0; i < B.size(); i++)
    {
        cin >> B[i];
    }

    New_Array(A, B);
}
#include "bits/stdc++.h"

using namespace std;

void New_Array(vector <int> &A, vector <int> &B)
{
    for (int i = 0; i < A.size(); i++)
    {
        B.push_back(A[i]);
    }
    for (int ele : B)
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
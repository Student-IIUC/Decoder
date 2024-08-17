#include "bits/stdc++.h"

using namespace std;

void shifting_zeros(vector <int> &A)
{
    vector <int> result;
    int count = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] != 0)
        {
            result.push_back(A[i]);
        }
        else
            count++;
    }

    for (int i = 1; i <= count; i++)
    {
        result.push_back(0);
    }
    for (int ele : result)
    {
        cout << ele << " ";
    }
}

int main()
{
    int N;
    cin >> N;
    vector <int> A(N);
    for (int i = 0; i < A.size(); i++)
    {
        cin >> A[i];
    }

    shifting_zeros(A);
}
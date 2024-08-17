#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < A.size(); i++)
    {
        cin >> A[i];
    }
    int count = 0;
    for (int i = 0; i < A.size(); i++)
    {
        // auto is an iterator
        auto it = find(A.begin(), A.end(), A[i] + 1);
        if (it != A.end())
        {
            count++;
        }
    }
    cout << count;
}
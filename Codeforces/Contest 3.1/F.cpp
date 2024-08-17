#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }

    vector<long long> b;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            b.push_back(a.front());
            a.erase(a.begin());
        }
        else 
        {
            b.push_back(a.back());
            a.pop_back();
        }
    }

    for (long long ele : b)
    {
        cout << ele << " ";
    }
}
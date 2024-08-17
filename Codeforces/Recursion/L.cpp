#include "bits/stdc++.h"

using namespace std;

int n;
int A[1000];

long long f(int i)
{
    if (i == n)
        return 0;
    
    return A[i] + f(i + 1);
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];

    cout << f(0);
}
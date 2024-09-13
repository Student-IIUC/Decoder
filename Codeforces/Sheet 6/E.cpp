#include "bits/stdc++.h"

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    unsigned long long n;
    cin >> n;
    
    for (long long i = 1; ; i++)
    {
        if (i > n)
        {
            cout << i - 1;
            return 0;
        }
        else 
            n -= i;
    }
}
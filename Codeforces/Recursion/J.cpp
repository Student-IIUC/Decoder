#include "bits/stdc++.h"

using namespace std;

long long f(int n)
{
   if (n < 2) return 1;
   return n * f(n - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << f(n) << endl;;
}
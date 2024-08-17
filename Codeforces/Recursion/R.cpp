#include "bits/stdc++.h"

using namespace std;

long long n;

bool palindrome(long long A[], long long i)
{
    if (i == n)
        return 1;
    return (A[i] == A[n - i - 1]) && palindrome(A, i + 1);
}

int main()
{
    cin >> n;
    long long A[n];
    for (long long i = 0; i < n; i++)
        cin >> A[i];

    if (palindrome(A, 0))
        cout << "YES";
    else 
        cout << "NO";

}
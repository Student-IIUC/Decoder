#include "bits/stdc++.h"

using namespace std;

int count_divisors(int n)
{
    int count = 0;
    for (int  i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                count++;
            }
            else 
            {
                count += 2;
            }
        }
    }
    return count;
}

void divisors(int A[], int N)
{
    int max_divisors = 0;
    int max_number = -1;
    for (int i = 0; i < N; i++)
    {
        if (max_divisors < count_divisors(A[i]))
        {
            max_divisors = count_divisors(A[i]);
            max_number = A[i];
        }
        else if (max_divisors == count_divisors(A[i]))
        {
            max_number = max(max_number, A[i]);
        }
    }
    cout << "\nThe number that has the maximum number of divisors : " << max_number;
}

bool is_palindrome(string txt)
{
    string rev = txt;

    reverse(rev.begin(), rev.end());
    return rev == txt;
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void min_max(int A[], int n)
{
    int mn = INT_MAX;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mn = min(mn, A[i]);
        mx = max(mx, A[i]);
    }
    cout << "The maximum number : " << mx;
    cout << "\nThe minimum number : " << mn;
}

int main()
{
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    min_max(A, N);
    int count1 = 0, count2 = 0;
    for (int i = 0; i < N; i++)
    {
        if (isPrime(A[i]))
        {
            count1++;
        }
        if (is_palindrome(to_string(A[i])))
        {
            count2++;
        }
    }
    cout << "\nThe number of prime numbers : " << count1;
    cout << "\nThe number of palindrome numbers : " << count2;

    divisors(A, N);
}
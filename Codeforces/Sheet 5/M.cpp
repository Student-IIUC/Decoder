#include "bits/stdc++.h"

using namespace std;

void print_distinct(int A[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (A[i] == A[j])
            {
                break;
            }
        }
        if (i == j)
        {
            count++;
        }
    }
    cout << count;
}

int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    print_distinct(A, n);
}
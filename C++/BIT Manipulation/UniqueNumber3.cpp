#include "bits/stdc++.h"

using namespace std;

bool get_bit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int set_bit(int n, int pos)
{
    return (n | (1 << pos));
}

int unique(int arr[], int n)
{
    int result = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
            if (get_bit(arr[j], i))
                sum++;
        
        if (sum % 3 != 0)
            result = set_bit(result, i);
    }

    return result;
}

// Example : 1 2 1 2 1 2 3
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << unique(arr, n) << endl;
}
#include "bits/stdc++.h"

using namespace std;

int get_bit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

void unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
        xorsum = xorsum ^ arr[i];

    int tempxor = xorsum;
    int getbit = 0;
    int pos = 0;
    while (getbit != 1)
    {
        getbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxor = 0;
    for (int i = 0; i < n; i++)
        if(get_bit(arr[i], pos - 1))
            newxor = newxor ^ arr[i];
    
    cout << newxor << endl;
    cout << (tempxor ^ newxor) << endl;
}

// Example : 1 2 3 1 2 3 5 7
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    unique(arr, n);
}
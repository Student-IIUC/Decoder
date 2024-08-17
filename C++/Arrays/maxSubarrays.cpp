#include <iostream>
#include <climits>

using namespace std;

void max_subarrays(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int mx = INT_MIN;
            for (int k = i; k <= j; k++)
            {
                mx = max(mx, arr[k]);
            }
            cout << mx << " ";
        }
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        max_subarrays(arr, n);
    }
}
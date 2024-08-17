#include <iostream>
#include <climits>

using namespace std;

int first_repeating_element(int arr[], int n)
{

    const int N = 1e5 + 2;
    int idx[N];

    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minidx = INT_FAST32_MAX;

    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] != -1)
        {
            minidx = min(minidx, idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }
    if (minidx == INT_FAST32_MAX)
    {
        return -1;
    }
    else
    {
        return minidx + 1;
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << first_repeating_element(arr, n) << endl;
}
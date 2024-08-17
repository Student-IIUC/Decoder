#include <iostream>

using namespace std;

bool raid(int arr[], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] + arr[i + 1] == m)
            return true;
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cout << "Enter the sum of pair : ";
    cin >> m;
    if (raid(arr, n, m))
        cout << "Yes " << endl;
    else
        cout << "No " << endl;
}
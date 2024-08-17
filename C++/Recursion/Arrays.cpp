#include <iostream>

using namespace std;

void print_all_elements_of_array(int arr[], int idx, int n)
{
    // Base case
    if (n == 0 || n == idx)
    {
        return;
    }
    cout << arr[idx] << " ";

    print_all_elements_of_array(arr, idx + 1, n);

    return;
}

int max_value_in_array(int arr[], int idx, int n)
{
    if (idx == n - 1)
    {
        return arr[idx];
    }
    return max(arr[idx], max_value_in_array(arr, idx + 1, n));
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
    print_all_elements_of_array(arr, 0, n);
    cout << endl;

    cout << "The max value in the array :" << max_value_in_array(arr, 0, n) << endl;
}
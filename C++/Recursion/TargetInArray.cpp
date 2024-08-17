#include <iostream>

using namespace std;

bool find_element_in_array(int arr[], int n, int i, int x)
{
    // Base case
    if (i == n)
        return false;
    // Assumption
    else if (arr[i] == x || find_element_in_array(arr, n, i + 1, x))
        return true;
}

int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (find_element_in_array(arr, n, 0, x))
        cout << "Target found." << endl;
    else
        cout << "Target not found." << endl;
}
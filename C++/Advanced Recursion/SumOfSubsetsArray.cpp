#include <iostream>
#include <vector>

using namespace std;

void sum_of_all_subsets(int *arr, int n, int idx, int sum, vector<int> &result)
{
    // Base case
    if (idx == n)
    {
        result.push_back(sum);
        return;
    }

    // Assumption
    sum_of_all_subsets(arr, n, idx + 1, sum + arr[idx], result); // pick the ith element
    sum_of_all_subsets(arr, n, idx + 1, sum, result);  // don't pick the ith element
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> result;
    sum_of_all_subsets(arr, n, 0, 0, result);

    for (int ele : result)
        cout << ele << " ";
    cout << endl;
}
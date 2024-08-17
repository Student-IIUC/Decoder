#include <iostream>

using namespace std;

int knapsack(int value[], int wt[], int n, int W)
{
    // Base case
    if (n == 0 || W == 0)
        return 0;
    else if (wt[n - 1] > W)
        return knapsack(value, wt, n - 1, W);
    // Assumption
    return max(knapsack(value, wt, n - 1, W - wt[n - 1]) + value[n - 1], knapsack(value, wt, n - 1, W));
}

int main()
{
    int n, W;
    cin >> n >> W;
    int wt[n];
    for (int i = 0; i < n; i++)
        cin >> wt[i];

    int value[n];
    for (int i = 0; i < n; i++)
        cin >> value[i];
    cout << knapsack(value, wt, n, W) << endl;
}
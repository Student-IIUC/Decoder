#include <iostream>

using namespace std;

int min_cost_required(int h[], int n, int i)
{
    // Base case
    if (i == n - 1)
        return 0;
    else if (i == n - 2)
        return min_cost_required(h, n, i + 1) + abs(h[i] - h[i + 1]);
    // Assumption
    return min(min_cost_required(h, n, i + 1) + abs(h[i] - h[i + 1]), min_cost_required(h, n, i + 2) + abs(h[i] - h[i + 2]));
}

// For n=4
// 10 30 40 20
// Answer is 30

int main()
{
    int n;
    cin >> n;
    int h[n];
    for (int i = 0; i < n; i++)
        cin >> h[i];
    cout << "Minimum cost required :" << min_cost_required(h, n, 0) << endl;
}
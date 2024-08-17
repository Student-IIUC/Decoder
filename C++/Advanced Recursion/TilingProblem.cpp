#include <iostream>

using namespace std;

int tiling_ways(int n)
{
    // Base case
    if(n < 2)
        return n;
    // Assumption
    return tiling_ways(n - 1) + tiling_ways(n - 2);
}

int main()
{
    int n;
    cin >> n;

    cout << tiling_ways(n) << endl;
}
#include <iostream>

using namespace std;

void multiples(int num, int k)
{
    // Base case
    if (k < 1)
        return;
    // Assumption
    multiples(num, k - 1); // The function correctly return the first k values
    // Self work
    cout << num * k << " ";
}

int main()
{
    int num, k;
    cin >> num >> k;

    multiples(num, k);
}

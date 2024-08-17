#include <iostream>

using namespace std;

// Base solution.
int pow(int p, int q)
{
    // Base case
    if (q == 0)
        return 1;
    // Assumption
    else
        return p * pow(p, q - 1);
}

// Optimised solution.
int power(int p, int q)
{
    // Base case
    if (q == 0)
        return 1;
    // Assumption
    else if (q % 2 == 0)
        return power(p, q / 2) * power(p, q / 2);
    else
        return p * power(p, q / 2) * power(p, q / 2);
}

int main()
{
    int p, q;
    cin >> p >> q;

    cout << power(p, q) << endl;
}

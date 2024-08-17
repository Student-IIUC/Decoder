#include <iostream>

using namespace std;

int sum_using_alternate_sign(int n)
{
    // Base case
    if (n == 0)
        return 0;
    // Assumption
    return sum_using_alternate_sign(n - 1) + ((n % 2 == 0) ? (-n) : n);
}

int main()
{
    int n;
    cin >> n;

    cout << sum_using_alternate_sign(n) << endl;
}

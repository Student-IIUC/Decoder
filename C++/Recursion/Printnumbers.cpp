#include <iostream>

using namespace std;

void print_all_numbers(int n)
{
    // Base case
    if (n < 1)
        return;
    // Go and print first n-1 natural numbers -> assumption
    print_all_numbers(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;

    print_all_numbers(n);
}

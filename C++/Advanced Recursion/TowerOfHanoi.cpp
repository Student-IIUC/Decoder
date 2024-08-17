#include <iostream>

using namespace std;

void tower_of_hanoi(int n, char src, char dest, char helper)
{
    // Base case
    if (n == 0)
        return;
    // Assumption
    tower_of_hanoi(n - 1, src, helper, dest);
    // Self work
    cout << "Move from " << src << " to " << dest << endl;
    tower_of_hanoi(n - 1, helper, dest, src);
}

int main()
{
    int n;
    cin >> n;

    tower_of_hanoi(n, 'A', 'C', 'B');
}
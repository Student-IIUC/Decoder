#include <iostream>

using namespace std;

int count_path(int st, int en)
{
    // Base case
    if (st == en)
        return 1;
    else if (st > en)
        return 0;
    // Self Work
    int count = 0;
    for (int i = 1; i <= 6; i++)
        count += count_path(st + i, en);
    return count;
}

int main()
{
    int st, en;
    cin >> st >> en;

    cout << count_path(st, en) << endl;
}
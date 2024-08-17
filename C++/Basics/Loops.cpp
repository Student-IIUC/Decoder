#include <iostream>

using namespace std;

int main()
{
    // int n;
    // cout << "Enter n : ";
    // cin >> n;
    // for (int i = n / 2; i >= 1; i--)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << endl;
    //         break; // To get out of the loop.
    //     }
    // }
    int x, sum = 0, digits;
    cout << "Enter x : ";
    cin >> x;
    while (x)
    {
        digits = x % 10;
        if (digits % 2 == 0)
            sum += digits;
        x = x / 10;
    }
    cout << sum << endl;
    return 0;
}
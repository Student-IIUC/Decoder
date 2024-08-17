#include <iostream>

using namespace std;

int main()
{
    // int a, b, c;
    // cin >> a >> b >> c;

    // if (a > b)
    // {
    //     if (a > c)
    //         cout << a << endl;
    //     else
    //         cout << c << endl;
    // }
    // else
    // {
    //     if (b > c)
    //         cout << b << endl;
    //     else
    //         cout << c << endl;
    // }
    int a, b, c;
    cout << "Enter 1st number : ";
    cin >> a;
    cout << "Enter 2nd number : ";
    cin >> b;
    cout << "Enter 3rd number : ";
    cin >> c;
    if (a > b and a > c)
        cout << a << " is greatest";
    else if (b > a and b > c)
        cout << b << " is greatest";
    else
        cout << c << " is greatest";
    return 0;
}
#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    // We can take output like this
    // cout << "Hell"
    //      << "o ,w"
    //      << "orld";
    // cout << "Hello\n" << "world!\n";
    
    // We can take input like this
    // while (cin >> n){
    // code
    // }
    cin >> n;
    if (n > 99 and n < 1000) // We can use && instead of 'and' both are valid.
    {
        cout << "3 Digit Number" << endl;
    }
    else
    {
        cout << "Not a 3 Digit number" << endl;
    }
    int x;
    cout << "Enter x : ";
    cin >> x;
    if (x % 5 == 0 or x % 3 == 0)
    { // We can use || instead of 'or' both are valid.
        cout << "Divisible by 5 or 3" << endl;
    }
    else
    {
        cout << "Not -divisible by 5 or 3" << endl;
    }
    return 0;
}
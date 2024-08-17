#include <iostream>

using namespace std;

int fact(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
        f *= i;
    return f;
}

int ncr(int a, int b)
{
    return fact(a) / (fact(b) * fact(a - b));
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    // int r;
    // cout<<"Enter r : ";
    // cin>>r;
    /*   1
        1 1
       1 2 1
      1 3 3 1
     1 4 6 4 1
    */
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
            cout << " ";
        for (int j = 0; j <= i; j++)
            cout << ncr(i, j) << " ";
        cout << endl;
    }

    return 0;
}
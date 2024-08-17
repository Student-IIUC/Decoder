#include "bits/stdc++.h"

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int W, H;
        cin >> W >> H;
        if (W == H)
        {
            cout << "Square\n";
        }
        else 
            cout << "Rectangle\n";
    }
}
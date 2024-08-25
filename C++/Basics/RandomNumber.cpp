#include <bits/stdc++.h>

using namespace std;

int main()
{
    srand(time(0));
    // the method is rand() % b + a.
    // here a and b are the range (a, b)
    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
        case 1:
            cout << "You won a T-Shirt!\n";
            break;
        case 2:
            cout << "You won a Lucky coupon!\n";
            break;
        case 3:
            cout << "You won a Car!\n";
            break;
        case 4:
            cout << "You won a Bike!\n";
            break;
        case 5:
            cout << "You won a Bumper Sticker!\n";
            break;
    }
}
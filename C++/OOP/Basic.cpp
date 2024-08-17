#include "bits/stdc++.h"

using namespace std;

class HotDogStand // class specification
{
private:
    int HotDogsOnHand;
    int BunsOnHand;

public:
    void displayData() // display hot dogs and buns
    {
        cout << "\n   Hot dogs = " << HotDogsOnHand;
        cout << "\n   Buns = " << BunsOnHand;
    }
    void SoldOneDog() // record sale of one dog
    {
        HotDogsOnHand--;
        BunsOnHand--;
    }
    void initData() // set initial quantities
    {
        cout << "\n   Enter dogs on hand: ";
        cin >> HotDogsOnHand;
        cout << "   Enter buns on hand: ";
        cin >> BunsOnHand;
    }
}; // end of HotDogStand class
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    HotDogStand stand1, stand2, stand3;

    // set initial data
    cout << "\nInitialize data for stand 1";
    stand1.initData();
    cout << "\nInitialize data for stand 2";
    stand2.initData();

    // record some sales
    cout << "\nSelling 2 hot dogs from stand 1";
    stand1.SoldOneDog();
    stand1.SoldOneDog();
    cout << "\nSelling 3 hot dogs from stand 2";
    stand2.SoldOneDog();
    stand2.SoldOneDog();
    stand2.SoldOneDog();
    cout << endl;

    // display current data
    cout << "\nSupplies on hand, stand1";
    stand1.displayData();
    cout << "\nSupplies on hand, stand2";
    stand2.displayData();
}
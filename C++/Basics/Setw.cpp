#include <bits/stdc++.h>

using namespace std;

int main()
{
    // setw() : Adjusts the field with for the item about to be printed.
    // The setw() manipulator only affects the next value to be printed.

    cout << "Unformatted table : " << endl;
    cout << "Daniel" << " " << "Gray" << " 25" << endl;
    cout << "Stanley" << " " << "Woods" << " 33" << endl;
    cout << "Jordan" << " " << "Parker" << " 45" << endl;
    cout << "Joe" << " " << "Ball" << " 21" << endl;
    cout << "Josh" << " " << "Carr" << " 27" << endl;
    cout << "Izalish" << " " << "Robinson" << " 29" << endl;

    cout << endl;
    cout << "Formatted table with variables : " << endl;
    int col_width{14};

    cout << setw(col_width) << "Lastname" << setw(col_width) << "Firstname" << setw(col_width) << "Age" << endl;
    cout << setw(col_width) << "Daniel" << setw(col_width) << "Gray" << setw(col_width) << "25" << endl;
    cout << setw(col_width) << "Stanley" << setw(col_width) << "Woods" << setw(col_width) << "33" << endl;
    cout << setw(col_width) << "Jordan" << setw(col_width) << "Parker" << setw(col_width) << "45" << endl;
    cout << setw(col_width) << "Joe" << setw(col_width) << "Ball" << setw(col_width) << "21" << endl;
    cout << setw(col_width) << "Josh" << setw(col_width) << "Carr" << setw(col_width) << "27" << endl;
    cout << setw(col_width) << "Izalish" << setw(col_width) << "Robinson" << setw(col_width) << "29" << endl;

    // left justified
    cout << endl;
    cout << "Left justified table : " << endl;

    cout << left;
    cout << setw(col_width) << "Lastname" << setw(col_width) << "Firstname" << setw(col_width) << "Age" << endl;
    cout << setw(col_width) << "Daniel" << setw(col_width) << "Gray" << setw(col_width) << "25" << endl;
    cout << setw(col_width) << "Stanley" << setw(col_width) << "Woods" << setw(col_width) << "33" << endl;
    cout << setw(col_width) << "Jordan" << setw(col_width) << "Parker" << setw(col_width) << "45" << endl;
    cout << setw(col_width) << "Joe" << setw(col_width) << "Ball" << setw(col_width) << "21" << endl;
    cout << setw(col_width) << "Josh" << setw(col_width) << "Carr" << setw(col_width) << "27" << endl;
    cout << setw(col_width) << "Izalish" << setw(col_width) << "Robinson" << setw(col_width) << "29" << endl;

    // using setfill
    cout << endl;
    cout << "Left justified table : " << endl;

    cout << left;
    cout << setfill('-'); // to fill character
    cout << setw(col_width) << "Lastname" << setw(col_width) << "Firstname" << setw(col_width) << "Age" << endl;
    cout << setw(col_width) << "Daniel" << setw(col_width) << "Gray" << setw(col_width) << "25" << endl;
    cout << setw(col_width) << "Stanley" << setw(col_width) << "Woods" << setw(col_width) << "33" << endl;
    cout << setw(col_width) << "Jordan" << setw(col_width) << "Parker" << setw(col_width) << "45" << endl;
    cout << setw(col_width) << "Joe" << setw(col_width) << "Ball" << setw(col_width) << "21" << endl;
    cout << setw(col_width) << "Josh" << setw(col_width) << "Carr" << setw(col_width) << "27" << endl;
    cout << setw(col_width) << "Izalish" << setw(col_width) << "Robinson" << setw(col_width) << "29" << endl;
}
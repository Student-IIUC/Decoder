#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number1 = 15; // Decimal
    int number2 = 017; // Octal
    int number3 = 0x0f; // Hexadecimal
    int number4 = 0b00001111; // Binary - C++14

    cout << "Number1 is :" << number1 << endl;
    cout << "Number2 is :" << number2 << endl;
    cout << "Number3 is :" << number3 << endl;
    cout << "Number4 is :" << number4 << endl;

    // different number systems : dec, hex, oct

    int pos_int {717171};
    int neg_int {-47347};
    double double_var {498.32};

    cout << endl;
    cout << "pos_int in different bases : " << endl;
    cout << "pos_int (dec) : " << dec << pos_int << endl;
    cout << "pos_int (hex) : " << hex << pos_int << endl;
    cout << "pos_int (oct) : " << oct << pos_int << endl;

    cout << endl;
    cout << "neg_int in different bases : " << endl;
    cout << "neg_int (dec) : " << dec << neg_int << endl;
    cout << "neg_int (hex) : " << hex << neg_int << endl;
    cout << "neg_int (oct) : " << oct << neg_int << endl;

    cout << endl;
    cout << "double_var in different bases : " << endl;
    cout << "double_var (dec) : " << dec << double_var << endl;
    cout << "double_var (hex) : " << hex << double_var << endl;
    cout << "double_var (oct) : " << oct << double_var << endl;

    // showbase and nonshowbase : show the base for integral types

    pos_int = 171717;

    cout << "pos_int (noshowbase : default) : " << endl;
    cout << "pos_int (dec) : " << dec << pos_int << endl;
    cout << "pos_int (hex) : " << hex << pos_int << endl;
    cout << "pos_int (oct) : " << oct << pos_int << endl;

    cout << "pos_int (showbase) : " << endl;
    cout << showbase;
    cout << "pos_int (dec) : " << dec << pos_int << endl;
    cout << "pos_int (hex) : " << hex << pos_int << endl;
    cout << "pos_int (oct) : " << oct << pos_int << endl;
}
#include "bits/stdc++.h"

using namespace std;

// Example : 5 2
int get_bit(int num, int pos)
{
    return ((num & (1 << pos)) != 0);
}

// Example : 5 1
int set_bit(int num, int pos)
{
    return (num | (1 << pos));
}

// Example : 5 2
int clear_bit(int num, int pos)
{
    int mask = ~(1 << pos); // 1's complement
    return (num & mask);
}

// Example : 5 1 1
int update_bit(int num, int pos, int value)
{
    // clear bit
    int mask = ~(1 << pos);
    num = num & mask;

    // set bit
    return (num | (value << pos));
}

int main()
{
    int num, pos;
    cin >> num >> pos;

    cout << get_bit(num, pos) << endl;

    cout << set_bit(num, pos) << endl;

    cout << clear_bit(num, pos) << endl;
    int value;
    cin >> value;
    cout << update_bit(num, pos, value) << endl;
}
#include"bits/stdc++.h"

using namespace std;

int number_of_ones(int num)
{
    int count = 0;
    while (num)
    {
        num = num & (num - 1);
        count++;
    }
    return count;
}

int main()
{
    int num;
    cin >> num;

    cout << number_of_ones(num) << endl;
}
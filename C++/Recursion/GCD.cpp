#include <iostream>

using namespace std;

int greatest_common_divisor(int num1, int num2)
{
    // Base case
    if (num2 == 0)
        return num1;
    // Asssumption
    greatest_common_divisor(num2, num1 % num2);
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    if (num1 > num2)
        cout << greatest_common_divisor(num1, num2) << endl;
    else
        cout << greatest_common_divisor(num2, num1) << endl;
}

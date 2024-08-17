#include <iostream>

using namespace std;

int power(int p, int q)
{
    // Base case
    if (q == 0)
        return 1;
    // Assumption
    else if (q % 2 == 0)
        return power(p, q / 2) * power(p, q / 2);
    else
        return p * power(p, q / 2) * power(p, q / 2);
}

int armstrong_number(int num, int d)
{
    // Base case
    if (num == 0)
        return 0;
    // Assumption
    return power(num % 10, d) + armstrong_number(num / 10, d);
}

int main()
{
    int num;
    cin >> num;

    int no_of_digits = 0;
    int temp = num;
    while (temp)
    {
        temp /= 10;
        no_of_digits++;
    }

    int result = armstrong_number(num, no_of_digits);

    if (result == num)
        cout << "It's an armstrong number." << endl;
    else
        cout << "It's not an armstrong number." << endl;
}

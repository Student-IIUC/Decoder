#include <iostream>

using namespace std;

bool palindrome(int num, int &temp)
{
    // Base case
    if (num >= 0 and num <= 9)
    {
        int lastDigitOfTemp = temp % 10;
        temp /= 10;
        return (num == lastDigitOfTemp);
    }

    bool result = (palindrome(num / 10, temp) and ((num % 10) == (temp % 10)));
    temp /= 10;
    return result;
}

int main()
{
    int num;
    cin >> num;

    int temp = num;
    if (palindrome(num, temp))
        cout << "Number is palindrome." << endl;
    else
        cout << "Number is not palindrome." << endl;
}
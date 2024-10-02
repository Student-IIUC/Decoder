#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

char characters(int n)
{
    if (n < 10)
        return (char)(n + '0');
    else
        return (char)(n + 'A' - 10);
}

string dec_to_base(int n, int x)
{
    string S;
    while (n)
    {
        char rem = characters(n % x);
        S.push_back(rem);
        n /= x;
    }
    reverse(S.begin(), S.end());
    return S;
}

int number(char c)
{
    if (c >= '0' && c <= '9')
        return (int)(c - '0');
    else
        return (int)(c - 'A' + 10);
}

long long base_to_dec(string str, int a)
{
    long long decimal{};
    int size = str.size();
    for (size_t i{0}; i < size; i++)
    {
        int k = number(str[size - 1 - i]);
        decimal += k * pow(a, i);
    }
    return decimal;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    if (t == 1)
    {
        string n;
        int x;
        cin >> n >> x;
        cout << base_to_dec(n, x) << endl;
    }
    else
    {
        int n, x;
        cin >> n >> x;
        cout << dec_to_base(n, x) << endl;
    }
}
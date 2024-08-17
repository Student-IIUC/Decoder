#include "bits/stdc++.h"

using namespace std;

bool is_palindrome(string txt)
{
    string rev = txt;

    reverse(rev.begin(), rev.end());
    return rev == txt;
}

string get_binary(long long n)
{
    string binary;
    
    while (n)
    {
        if (n % 2)
            binary.push_back(1);
        else
            binary.push_back(0);
        n /= 2;
    }

    return binary;
}

int main()
{
    long long n;
    cin >> n;

    if (n % 2)
    {
        string binary = get_binary(n);

        if (is_palindrome(binary))
            cout << "YES";
        else 
            cout << "NO";
    }
    else 
        cout << "NO";   
}
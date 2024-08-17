#include <iostream>
#include <string>

using namespace std;

string remove_occurence_of_a(string s, int idx, int n)
{
    if (idx == n)
        return "";

    string curr = "";
    curr += s[idx];

    return ((s[idx] == 'a') ? "" : curr) + remove_occurence_of_a(s, idx + 1, n);
}

int main()
{
    string s;
    getline(cin, s);

    int n = s.length();

    cout << remove_occurence_of_a(s, 0, n) << endl;
}
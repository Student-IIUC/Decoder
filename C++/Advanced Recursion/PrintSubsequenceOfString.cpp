#include "bits/stdc++.h"

using namespace std;

void subsequences_of_string(string s, int i, string result, vector<string> &li)
{
    // Base case
    if (i == s.length())
    {
        li.push_back(result);
        return;
    }

    // Assumption
    subsequences_of_string(s, i + 1, result + s[i], li);
    subsequences_of_string(s, i + 1, result, li);
}

int main()
{
    string s;
    cin >> s;
    vector<string> result;
    subsequences_of_string(s, 0, "", result);

    for (string ele : result)
        cout << ele << " ";
    cout << endl;
}
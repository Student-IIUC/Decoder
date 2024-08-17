#include "bits/stdc++.h"

using namespace std;

void possible_combinations_of_letters(string s, int i, string result, vector<string> &li, vector<string> &com)
{
    // Base case
    if (i == s.size())
    {
        li.push_back(result);
        return;
    }
    int digit = s[i] - '0';
    if (digit <= i)
    {
        possible_combinations_of_letters(s, i + 1, result, li, com);
        return;
    }
    // Assumption
    for (int j = 0; j < com[digit].size(); j++)
        possible_combinations_of_letters(s, i + 1, result + com[digit][j], li, com);
    return;
}

int main()
{
    vector<string> com(10);
    com = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> result;
    string s;
    cin >> s;

    possible_combinations_of_letters(s, 0, "", result, com);

    for (string ele : result)
        cout << ele << " ";
    cout << endl;
}
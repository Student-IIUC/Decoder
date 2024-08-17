#include "bits/stdc++.h"

using namespace std;

int main()
{
    string S;
    cin >> S;

    // Convert the string to uppercase for case-insensitive comparison
    transform(S.begin(), S.end(), S.begin(), ::toupper);

    // Count the occurrences of each required letter
    int countE = count(S.begin(), S.end(), 'E');
    int countG = count(S.begin(), S.end(), 'G');
    int countY = count(S.begin(), S.end(), 'Y');
    int countP = count(S.begin(), S.end(), 'P');
    int countT = count(S.begin(), S.end(), 'T');

    // Calculate the minimum count for forming "EGYPT"
    int minCount = min({countE, countG, countY, countP, countT});

    cout << minCount << endl;

    return 0;
}
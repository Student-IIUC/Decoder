#include <iostream>
#include <string>
using namespace std;
int main()
{
    string S;
    cin >> S;
    int arr[26] = {0};
    for (int i = 0; i < S.length(); i++)
    {
        int idx = S[i] - 'a';
        arr[idx]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            char t = i + 'a';
            printf("%c : %d\n", t, arr[i]);
        }
    }       
}
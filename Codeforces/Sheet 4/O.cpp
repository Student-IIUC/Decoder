#include <iostream>

using namespace std;

int main()
{
    long long N;
    cin >> N;

    int count[26] = {0};

    for (int i = 0; i < N; i++)
    {
        char ch;
        cin >> ch;
        int idx = ch - 'a';
        count[idx]++;
    }

    for (int i = 0; i < 26; i++)
    {
        char ch = i + 'a';
        while (count[i] > 0)
        {
            cout << ch;
            count[i]--;
        }
    }
}
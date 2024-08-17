#include <iostream>
#include <string>

using namespace std;

int main()
{
    string hello = "hello";
    int idx = 0;

    string S;
    cin >> S;
    for (int i = 0; i < S.size() && idx < 5; i++)
        if (S[i] == hello[idx])
            idx++;
    
    if (idx == 5)
        cout << "YES\n";
    else
        cout << "NO\n";
}
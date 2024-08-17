#include <iostream>

using namespace std;

bool check(string s, int A, int B)
{
    int c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '-')
            c++;
    }
    if(s[A] == '-' && c == A + B)
        return true;
    else
        return false;    
}

int main()
{
    int A, B;
    cin >> A >> B;
    string S;
    cin >> S;
   
    if (check(S, A, B))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
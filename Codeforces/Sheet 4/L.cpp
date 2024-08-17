#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;
    int x, y, pos;
    while (Q--)
    {
        string op;
        cin >> op;
        if (op == "substr")
        {
            cin >> x >> y;
            if (x > y)
                swap(x, y);
            cout << S.substr(x - 1, (y - x) + 1) << endl;
        }
        else if (op == "sort")
        {
            cin >> x >> y;
            if (x > y)
                swap(x, y);
            sort(S.begin() + x - 1, S.begin() + y);
        }
        else if (op == "pop_back")
            S.pop_back();
        else if (op == "reverse")
        {
            cin >> x >> y;
            if (x > y)
                swap(x, y);
            reverse(S.begin() + x - 1, S.begin() + y);
        }
        else if (op == "back")
            cout << S.back() << endl;
        else if (op == "front")
            cout << S.front() << endl;
        else if (op == "print")
        {
            cin >> pos;
            cout << S[pos - 1] << endl;
        }
        else
        {
            char x;
            cin >> x;
            S.push_back(x);
        }
    }
}
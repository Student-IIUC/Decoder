#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    unsigned long long a, b, q;
    cin >> a >> b >> q;
    unsigned int res = q % 3;
    
    if (res == 1)
        cout << a << endl;
    else if (res == 2)
        cout << b << endl;
    else
        cout << (a ^ b) << endl;
}
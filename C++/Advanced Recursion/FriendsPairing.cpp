#include <iostream>

using namespace std;

int friends_pairing(int n)
{
    // Base case
    if(n == 0 || n == 1 || n == 2)
        return n;
    // Assumption
    return friends_pairing(n - 1) + friends_pairing(n - 2) * (n - 1); 
}

int main()
{
    int n;
    cin >> n;

    cout << friends_pairing(n) << endl;
}
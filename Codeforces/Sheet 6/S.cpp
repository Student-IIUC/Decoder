#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a))
    {
        cout << "Valid\n";
        double s = (a + b + c) / 2;
        double A = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << fixed << setprecision(6) << A << endl;
    }

    else
        cout << "Invalid\n";
}
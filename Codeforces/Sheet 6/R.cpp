#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
    unsigned int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 > x2)
        swap(x1, x2);
    if (y1 > y2)
        swap(y1, y2);
    double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout << fixed << setprecision(9) << distance << endl;
}
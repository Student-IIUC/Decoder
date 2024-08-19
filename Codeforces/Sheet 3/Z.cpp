#include "bits/stdc++.h"

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    cin >> n >> q;

    vector<long long> A(n);
    for (int i = 0; i < A.size(); i++)
    {
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    while (q--)
    {
        long long x;
        cin >> x;

        bool flag = 0;
        int left = 0, right = A.size() - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (A[mid] == x)
            {
                flag = 1;
                break;
            }

            else if (A[mid] < x)
                left = mid + 1;
            else
                right = mid - 1;
        }

        if (flag)
            cout << "found\n";
        else
            cout << "not found\n";
    }
}
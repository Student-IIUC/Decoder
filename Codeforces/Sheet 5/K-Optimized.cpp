#include <bits/stdc++.h>

using namespace std;

void shifting(vector<int> &A, int n, int x) {
    x %= n; // Ensure x is within the bounds of the vector size
    if (x != 0) {
        rotate(A.begin(), A.begin() + (n - x), A.end());
    }
    for (int ele : A) {
        cout << ele << " ";
    }
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    shifting(A, n, x);
    return 0;
}

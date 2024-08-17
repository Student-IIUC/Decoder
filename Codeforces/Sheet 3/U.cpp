#include "bits/stdc++.h"

using namespace std;

bool isSubsequence(const vector<long long>& A, const vector<long long>& B) {
    int i = 0; // Pointer for array A
    int j = 0; // Pointer for array B

    while (i < A.size() && j < B.size()) {
        if (A[i] == B[j]) {
            // Match found, move both pointers
            ++i;
            ++j;
        } else {
            // No match, move only the pointer for A
            ++i;
        }
    }

    // If we reached the end of B, it's a subsequence
    return j == B.size();
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<long long> A(N);
    for (int i = 0; i < N; ++i)
        cin >> A[i];

    vector<long long> B(M);
    for (int i = 0; i < M; ++i)
        cin >> B[i];

    if (isSubsequence(A, B))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

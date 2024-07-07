#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, Q;
    cin >> N >> K >> Q;
    vector<int> A(K), L(Q);
    for (int i = 0; i < K; i++) cin >> A[i];
    for (int i = 0; i < Q; i++) cin >> L[i];

    for (int i = 0; i < Q; i++) {
       if (A[L[i]-1] == N) continue;
       if (L[i] <= K-1 && A[L[i]-1] + 1 == A[L[i]]) continue;
       A[L[i]-1]++;
    }

    for (int i = 0; i < K; i++) {
        cout << A[i];
        if (i != K-1) cout << " ";
    }
    cout << endl;

    return 0;
}

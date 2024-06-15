#include <bits/stdc++.h>
using namespace std;

int M, N;

int main() {
    cin >> N >> M;
    vector<long long> A(N), B(M);
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < M; i++) cin >> B[i];
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    vector<bool> urikire(N);
    for (int i = 0; i < N; i++) urikire[i] = false;

    long long Answer = 0; // 金額の合計の最小

    int idx = -1; // 目印

    // 二分探索で求める
    for (int i = 0; i < M; i++) {
        int pos = lower_bound(A.begin(), A.end(), B[i]) - A.begin();
        // cout << pos << endl;
        idx = max(idx, pos);
        if (pos == N) {
            cout << "-1" << endl;
            return 0;
        }
        while (true) {
            // cout << "pos, i= " << pos << " " << i << endl;
            if (idx == N) {
                cout << "-1" << endl;
                return 0;
            }
            if (urikire[idx] == false) {
                Answer += A[idx];
                urikire[idx] = true;
                break;
            }
            idx++;
        }
    }

    cout << Answer << endl;

    return 0;
}

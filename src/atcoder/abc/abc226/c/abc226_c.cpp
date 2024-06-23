#include <bits/stdc++.h>
using namespace std;


int main() {
    long long N;
    cin >> N;
    vector<long long> T(N), K(N);
    vector<vector<long long>> A(N, vector<long long>(0));
    long long ans = 0;
    for (int i = 0; i < N; i++) {
        cin >> T[i];
        cin >> K[i];
        for (int j = 0; j < K[i]; j++) {
            long long a;
            cin >> a;
            A[i].push_back(a-1);
        }
    }
    vector<bool> used(N);
    for (int i = 0; i < N; i++) used[i] = false;
    used[N-1] = true;
    for (int i = N-1; i >= 0; i--) {
        if (used[i] == true) {
            ans += T[i];
            for (int j = 0; j < K[i]; j++) {
                used[A[i][j]] = true;
            }
        }
    }

    cout << ans << endl;

    return 0;
}

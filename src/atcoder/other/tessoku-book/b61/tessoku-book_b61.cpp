#include <bits/stdc++.h>
using namespace std;

int N, M;
int A[101010], B[101010];
vector<int> G[101010];

int main() {
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        cin >> A[i] >> B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    int ma = -1, idx = -1;
    for (int i = 1; i <= N; i++) {
        // cout << G[i].size() << endl;
        if (ma < (int)(G[i].size())) {
            ma = (int)(G[i].size());
            idx = i;
        }
    }

    cout << idx << endl;

    return 0;
}

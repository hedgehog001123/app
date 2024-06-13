#include <bits/stdc++.h>
using namespace std;

int N, M;
int A[101010], B[101010];
vector<int> G[101010]; // 隣接リスト

int main() {
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        cin >> A[i] >> B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    for (int i = 1; i <= N; i++) {
        cout << i << ": {";
        for (int j = 0; j < G[i].size(); j++) {
            if (j >= 1) cout <<", ";
            cout << G[i][j];
        }
        cout << "}" << endl;
    }

    return 0;
}

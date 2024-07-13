#include <bits/stdc++.h>
using namespace std;

long long N, M;
long long A[201010];
long long U[201010], V[201010], B[201010];
vector<pair<long long, long long>> G[201010];

// ダイクストラ法
long long cur[201010];
bool kakutei[201010];
priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> Q;

int main() {
    cin >> N >> M;
    for (int i = 1; i <= N; i++) cin >> A[i];
    for (int i = 1; i <= M; i++) {
        cin >> U[i] >> V[i] >> B[i];
        G[U[i]].push_back(make_pair(V[i], B[i]));
        G[V[i]].push_back(make_pair(U[i], B[i]));
    }

    for (int i = 1; i <= N; i++) kakutei[i] = false;
    for (int i = 1; i <= N; i++) cur[i] = 1'000'000'000'000'000'000;
    cur[1] = A[1];
    Q.push(make_pair(cur[1], 1));

    while (!Q.empty()) {
        int pos = Q.top().second;
        Q.pop();

        if (kakutei[pos] == true) continue;

        kakutei[pos] = true;
        for (int i = 0; i < G[pos].size(); i++) {
            long long nex = G[pos][i].first;
            long long cost = G[pos][i].second;
            long long pointCost = A[nex];
            if (cur[nex] > cur[pos] + cost + pointCost) {
                cur[nex] = cur[pos] + cost + pointCost;
                Q.push(make_pair(cur[nex], nex));
            }
        }
    }

    for (int i = 2; i <= N; i++) {
        cout << cur[i];
        if (i != N) cout << " ";
    }
    cout << endl;

    return 0;
}

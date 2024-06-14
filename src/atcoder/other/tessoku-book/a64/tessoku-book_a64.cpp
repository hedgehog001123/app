#include <bits/stdc++.h>
using namespace std;

int N, M;
int A[101010], B[101010], C[101010];
int dist[101010];
vector<pair<int, int>> G[101010];

int cur[101010];
bool kakutei[101010];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;

const int INF = 2000000000;

int main() {
    cin >> N >> M;
    for (int i = 1; i <= M; i++) {
        cin >> A[i] >> B[i] >> C[i];
        G[A[i]].push_back(make_pair(B[i], C[i]));
        G[B[i]].push_back(make_pair(A[i], C[i]));
    }

    for (int i = 1; i <= N; i++) kakutei[i] = false;
    for (int i = 1; i <= N; i++) cur[i] = INF;
    cur[1] = 0;
    Q.push(make_pair(cur[1], 1));

    while (!Q.empty()) {
        int pos = Q.top().second;
        Q.pop();

        if (kakutei[pos] == true) continue;

        kakutei[pos] = true;
        for (int i = 0; i < G[pos].size(); i++) {
            int nex = G[pos][i].first;
            int cost = G[pos][i].second;
            if (cur[nex] > cur[pos] + cost) {
                cur[nex] = cur[pos] + cost;
                Q.push(make_pair(cur[nex], nex));
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        if (cur[i] == INF) cout << "-1" << endl;
        else cout << cur[i] << endl;
    }

    return 0;
}

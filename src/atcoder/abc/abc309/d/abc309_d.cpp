#include <bits/stdc++.h>
using namespace std;

vector<int> G[301010];
int dist[301010];
queue<int> Q;

int main() {
    int n1, n2, m;
    cin >> n1 >> n2 >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    for (int i = 0; i <= n1+n2; i++) dist[i] = -1;

    Q.push(1);
    dist[1] = 0;
    Q.push(n1+n2);
    dist[n1+n2] = 0;
    while (!Q.empty()) {
        int pos = Q.front();
        Q.pop();
        for (int i = 0; i < G[pos].size(); i++) {
            int to = G[pos][i];
            if (dist[to] == -1) {
                dist[to] = dist[pos] + 1;
                Q.push(to);
            }
        }
    }

    int d1 = -1, d2 = -1;
    for (int i = 1; i <= n1; i++) d1 = max(d1, dist[i]);
    for (int i = n1+1; i <= n1+n2; i++) d2 = max(d2, dist[i]);

    cout << d1 + d2 + 1 << endl;

    return 0;
}

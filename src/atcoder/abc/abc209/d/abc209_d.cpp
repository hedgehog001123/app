#include <bits/stdc++.h>
using namespace std;

int dist[101010];
vector<int> G[101010];

bool visited[101010];

int main() {
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n-1; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    queue<int> que;
    que.push(1);
    dist[1] = 1; 
    while (!que.empty()) {
        int pos = que.front();
        que.pop();
        if (visited[pos]) continue;
        visited[pos] = true;
        for (int i = 0; i < G[pos].size(); i++) {
            int nex = G[pos][i];
            if (visited[nex]) continue;
            dist[nex] = dist[pos] + 1;
            que.push(nex);
        }
    }

    // for (int i = 1; i <= n; i++) cout << dist[i] << endl;

    for (int i = 0; i < q; i++) {
        int c, d;
        cin >> c >> d;

        if (abs(dist[d]-dist[c]) % 2 == 0) cout << "Town" << endl;
        else cout << "Road" << endl;
    }

    return 0;
}

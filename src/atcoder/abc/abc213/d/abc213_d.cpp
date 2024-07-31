#include <bits/stdc++.h>
using namespace std;

vector<int> G[201010];
bool visited[201010];

vector<int> Path;

void dfs (int pos) {
    visited[pos] = true;
    for (int i = 0; i < G[pos].size(); i++) {
        int nex = G[pos][i];
        if (visited[nex] == false) {
            Path.push_back(nex);
            dfs(nex);
            Path.push_back(pos);
        }
    }
    return;
}

int main() {
    int n; cin >> n;
    for (int i = 0; i < n-1; i++) {
        int a, b;
        cin >> a >> b;

        G[a].push_back(b);
        G[b].push_back(a);
    }
    for (int i = 1; i <= n; i++) sort(G[i].begin(), G[i].end());

    for (int i = 0; i <= n; i++) visited[i] = false;
    Path.push_back(1);
    dfs(1);

    for (int i = 0; i < Path.size(); i++) {
        if (i > 0) cout << " ";
        cout << Path[i];
    }
    cout << endl;

    return 0;
}

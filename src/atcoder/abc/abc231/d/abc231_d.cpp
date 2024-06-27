#include <bits/stdc++.h>
using namespace std;

int cnt[101010];
vector<int> G[101010];
bool visited[101010];
bool ok = true;

void dfs(int pos) {
    visited[pos] = true;
    int cnt = 0;
    for (int i = 0; i < G[pos].size(); i++) {
        int nex = G[pos][i];
        if (visited[nex] == true) cnt++;
        if (visited[nex] == false) dfs(nex);
    }

    if (cnt > 1) ok = false;
    return;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m);
    for (int i = 0; i <= n; i++) cnt[i] = 0;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for (int i = 0; i <= n; i++) visited[i] = false;
    
    for (int i = 0; i < n; i++) {
        if (G[i].size() > 2) ok = false;
        if (visited[i] == true) continue;
        dfs(i);
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

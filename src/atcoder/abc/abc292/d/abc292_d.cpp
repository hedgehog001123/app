#include <bits/stdc++.h>
using namespace std;

vector<int> G[201010];

int main() {
    int n, m;
    cin >> n >> m;

    if (n == 1) {
        if (m == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    vector<bool> seen(n, false);
    queue<int> que;
    for (int i = 0; i < n; i++) {
        if (seen[i] == true) continue;
        que.push(i);
        seen[i] = true;
        int hen = 0;
        int tyouten = 1;

        while (!que.empty()) {
            int p = que.front();
            que.pop();
            hen += G[p].size();
            for (int j = 0; j < G[p].size(); j++) {
                if (seen[G[p][j]] == false) {
                    tyouten++;
                    que.push(G[p][j]);
                }
                seen[G[p][j]] = true;
            }
        }
        // printf("%d, %d\n", hen, tyouten);
        if (hen != tyouten * 2) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}

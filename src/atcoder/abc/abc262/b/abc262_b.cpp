#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> G(n, vector<bool> (n));
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        G[u][v] = G[v][u] = true;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            for (int k = j+1; k < n; k++) {
                if (G[i][j] && G[j][k] && G[k][i]) {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}

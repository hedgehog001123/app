#include <bits/stdc++.h>
using namespace std;

vector<int> G[101010];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;

        G[a].push_back(b);
        G[b].push_back(a);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < G[i].size(); j++) {
            if (G[i][j] < i) cnt++;
        }
        if (cnt == 1) ans++;
    }

    cout << ans << endl;

    return 0;
}

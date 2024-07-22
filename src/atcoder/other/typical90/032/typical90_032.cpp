#include <bits/stdc++.h>
using namespace std;

vector<int> ng[10];

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        ng[x].push_back(y);
        ng[y].push_back(x);
    }

    int ans = 2000000000;

    vector<int> jyunban(n);
    for (int i = 0; i < n; i++) jyunban[i] = i;

    do {
        bool ok = true;
        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < (int)ng[jyunban[i]].size(); j++) {
                if (ng[jyunban[i]][j] == jyunban[i+1]) {
                    ok = false;
                }
            }
        }
        if (!ok) continue;

        int tmp = 0;
        for (int i = 0; i < n; i++) {
            tmp += a[jyunban[i]][i];
        }
        // cout << "tmp: =" << tmp << endl;
        ans = min(ans, tmp);
    } while (next_permutation(jyunban.begin(), jyunban.end()));

    if (ans == 2000000000) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}

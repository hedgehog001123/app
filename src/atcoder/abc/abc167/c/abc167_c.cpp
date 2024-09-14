#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> c(n);
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int ans = 999'999'999;
    for (int i = 0; i < (1 << n); i++) {
        int cost = 0;
        int tmp = i;
        vector<int> rikaido(m, 0);

        for (int j = 0; j < n; j++) {
            if (tmp & (1 << j)) {
                cost += c[j];
                for (int k = 0; k < m; k++) {
                    rikaido[k] += a[j][k];
                }
            }
        }

        bool ok = true;
        for (int j = 0; j < m; j++) {
            if (rikaido[j] < x)
                ok = false;
        }
        if (ok) {
            ans = min(ans, cost);
        }
    }
    if (ans == 999'999'999)
        cout << -1 << endl;
    else
        cout << ans << endl;

    return 0;
}

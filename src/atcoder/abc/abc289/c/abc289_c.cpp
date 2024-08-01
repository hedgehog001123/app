#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(m);
    for (int i = 0; i < m; i++) {
        int c;
        cin >> c;
        for (int j = 0; j < c; j++) {
            int b;
            cin >> b;
            a[i].push_back(b);
        }
    }

    int ans = 0;
    for (int i = 1; i < (1 << m); i++) {
        set<int> s;
        for (int j = 0; j < m; j++) {
            if (i & (1 << j)) {
                for (int k = 0; k < (int)a[j].size(); k++) {
                    s.insert(a[j][k]);
                }
            }
        }
        if ((int)s.size() == n) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}

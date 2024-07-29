#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> c(n), d(m);
    vector<int> p(m);
    for (int i = 0; i < n; i++) cin >> c[i];
    for (int i = 0; i < m; i++) cin >> d[i];
    int def;
    cin >> def;
    for (int i = 0; i < m; i++) cin >> p[i];

    map<string, int> ma;
    for (int i = 0; i < m; i++) {
        ma[d[i]] = p[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += ma[c[i]];
        if (ma[c[i]] == 0) ans += def;
    }

    cout << ans << endl;

    return 0;
}

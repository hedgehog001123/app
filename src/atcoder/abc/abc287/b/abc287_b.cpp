#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n), t(m);
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < m; i++) cin >> t[i];

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s[i][3]==t[j][0] && s[i][4]==t[j][1] && s[i][5]==t[j][2]) {
                ans++;
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}

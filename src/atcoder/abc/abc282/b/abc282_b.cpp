#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            bool ok = true;
            for (int k = 0; k < m; k++) {
                if (s[i][k] == 'x' && s[j][k] == 'x') ok = false;
            }
            if (ok) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}

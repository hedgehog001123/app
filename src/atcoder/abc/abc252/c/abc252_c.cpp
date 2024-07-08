#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    int ans = 99999999;

    // cnt[i][j]は、j文字目がiである個数
    int cnt[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) cnt[i][j] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 10; j++) cnt[s[i][j]-'0'][j]++;
    }

    int mx;
    for (int i = 0; i < 10; i++) {
        mx = 0;
        for (int j = 0; j < 10; j++) {
            mx = max(mx, 10 * (cnt[i][j]-1) + j);
        }
        ans = min(ans, mx);
    }

    cout << ans << endl;

    return 0;
}

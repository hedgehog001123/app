#include <bits/stdc++.h>
using namespace std;

long long n, x;
long long ans = 0;
vector<vector<long long>> a;

void dfs(long long pos, long long seki) {
    if (pos == n) {
        if (seki == x) ans++;
        return;
    }
    for (long long i = 0; i < (int)a[pos].size(); i++) {
        if (seki > x / a[pos][i]) continue;
        dfs(pos + 1, seki * a[pos][i]);
    }
}

int main() {
    cin >> n >> x;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        long long l;
        cin >> l;
        a[i].resize(l);
        for (long long j = 0; j < l; j++) cin >> a[i][j];
    }
    dfs(0, 1);
    cout << ans << endl;

    return 0;
}

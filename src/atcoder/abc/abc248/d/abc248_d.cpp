#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    map<int, vector<int>> m;
    for (int i = 0; i < n; i++) {
        m[a[i]].push_back(i);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int l, r, x;
        cin >> l >> r >> x;
        l--;
        r--;

        int ans = 0;
        // TLE
        // for (auto b: m[x]) if (l <= b && b <= r) ans++;
        int pos1 = lower_bound(m[x].begin(), m[x].end(), l) - m[x].begin();
        int pos2 = upper_bound(m[x].begin(), m[x].end(), r) - m[x].begin();
        ans += (pos2 - pos1);

        cout << ans << endl;
    }

    return 0;
}

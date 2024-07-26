#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];

    vector<pair<int, int>> magic;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            int dx = x[j]-x[i];
            int dy = y[j]-y[i];
            int r = gcd(dx, dy);
            magic.push_back(make_pair(dx / r, dy / r));
            magic.push_back(make_pair(dx*(-1) / r, dy*(-1) / r));
        }
    }

    sort(magic.begin(), magic.end());

    int ans = 1;
    for (int i = 0; i < magic.size()-1; i++) {
        if (magic[i].first == magic[i+1].first && magic[i].second == magic[i+1].second) continue;
        ans++;
    }

    cout << ans << endl;

    // cout << gcd(2, 0) << endl;
    // cout << gcd(-3, -6) << endl;
    // cout << gcd(-2, 4) << endl;

    return 0;
}

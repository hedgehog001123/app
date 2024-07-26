#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<pair<int, int>> p;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans++;
        if (!p.empty() && p[p.size()-1].first == a[i]) p[p.size()-1].second++;
        else p.push_back(make_pair(a[i], 1));

        if (p[p.size()-1].first == p[p.size()-1].second) {
            ans -= a[i];
            p.pop_back();
        }

        cout << ans << endl;
    }

    return 0;
}

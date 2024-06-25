#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, w;
    cin >> n >> w;
    vector<pair<long long, long long>> m(n);
    for (int i = 0; i < n; i++) cin >> m[i].first >> m[i].second;
    long long ans = 0;
    sort(m.begin(), m.end());
    reverse(m.begin(), m.end());

    // for (int i = 0; i < n; i++) cout << m[i].first << " " << m[i].second << endl;

    long long current_weight = 0;
    for (int i = 0; i < n; i++) {
        if (m[i].second + current_weight <= w) {
            current_weight += m[i].second;
            ans += m[i].first * m[i].second;
        }
        else {
            ans += m[i].first * (w - current_weight);
            break;
        }
    }

    cout << ans << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;



int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> p(n);
    for (int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
    sort(p.begin(), p.end());

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // p[i]: 左下, p[j]: 右上
            if (p[i].first < p[j].first && p[i].second < p[j].second) {
                if (binary_search(p.begin(), p.end(), make_pair(p[i].first, p[j].second))
                && binary_search(p.begin(), p.end(), make_pair(p[j].first, p[i].second))) ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

bool used[201010];

int main() {
    int n, m, h, k;
    string s;
    // 移動回数・回復M個・現在HP・回復後・移動指示
    cin >> n >> m >> h >> k >> s;
    vector<pair<int, int>> p;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        p.push_back(make_pair(a, b));
    }
    sort(p.begin(), p.end());

    bool ok = true;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') x++;
        else if (s[i] == 'L') x--;
        else if (s[i] == 'U') y++;
        else if (s[i] == 'D') y--;
        h--;
        if (h < 0) ok = false;
        bool exist_item = binary_search(p.begin(), p.end(), make_pair(x, y));
        if (exist_item && h < k) {
            int pos = lower_bound(p.begin(), p.end(), make_pair(x, y)) - p.begin();
            if (used[pos]) continue;
            used[pos] = true;
            h = k;
        }
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

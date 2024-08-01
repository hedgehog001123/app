#include <bits/stdc++.h>
using namespace std;

int ans[110];

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++) cin >> a[i];

    vector<pair<int, int>> p(n);
    int idx = 0;
    for (int i = 0; i < m; i++) {
        if (i > 0 && a[i] == a[i-1]+1) {
            idx--;
            p[idx].second++;
            idx++;
        }
        else {
            p[idx] = make_pair(a[i], 1);
            idx++;
        }
    }
    
    for (int i = 1; i <= n; i++) ans[i] = i;
    for (int i = 0; i < idx; i++) {
        int pos = p[i].first;
        int cnt = p[i].second;

        for (int i = pos; i <= pos+cnt; i++) {
            ans[i] = cnt+2*pos-i;
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << ans[i];
        if (i != n) cout << " ";
    }
    cout << endl;
    

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), c;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++) c.push_back(a[i]);
    for (int i = 0; i < m; i++) c.push_back(b[i]);
    sort(c.begin(), c.end());

    bool ans = false;
    int x = 0;
    for (int i = 0; i < n + m; i++) {
        for (int j = 0; j < n; j++) {
            if (c[i] == a[j]) {
                x++;
                break;
            }
            if (j == n-1) x = 0;
        }
        if (x >= 2) ans = true;
    }

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

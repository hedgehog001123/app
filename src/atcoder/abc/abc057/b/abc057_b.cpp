#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1), b(n + 1), c(m + 1), d(m + 1);
    for (int i = 1; i <= n; i++) cin >> a[i] >> b[i];
    for (int j = 1; j <= m; j++) cin >> c[j] >> d[j];

    for (int i = 1; i <= n; i++) {
        int nearst_dist = 800004000;
        int ans = -1;
        for(int j = 1; j <= m; j++) {
            if (nearst_dist > abs(a[i]- c[j]) + abs(b[i] - d[j])) {
                nearst_dist = abs(a[i]- c[j]) + abs(b[i] - d[j]);
                ans = j;
            }
        }
        cout << ans << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    int cnt = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (b[i] == a[j]) {
                a[j] = 0;
                cnt++;
                break;
            }
        }
    }
    if (cnt == m) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

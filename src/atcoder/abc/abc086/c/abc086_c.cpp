#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> t(n + 1), x(n + 1), y(n + 1);
    t[0] = 0, x[0] = 0, y[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> t[i] >> x[i] >> y[i];
    }

    bool ok = true;
    for (int i = 1; i <= n; i++) {
        int dt = t[i] - t[i - 1];
        int dx = abs(x[i] - x[i - 1]);
        int dy = abs(y[i] - y[i - 1]);
        if (dt < dx + dy) ok = false;
        if (dt % 2 != (dx + dy) % 2) ok = false;
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];
    sort(x.begin(), x.end(), greater<int>());

    for (int i = 0; i < n; i++) {
        if (x[i] >= 500) {
            int tmp = min(x[i] / 500, f);
            f -= tmp;
            x[i] -= tmp * 500;
        }
        if (x[i] >= 100) {
            int tmp = min(x[i] / 100, e);
            e -= tmp;
            x[i] -= tmp * 100;
        }
        if (x[i] >= 50) {
            int tmp = min(x[i] / 50, d);
            d -= tmp;
            x[i] -= tmp * 50;
        }
        if (x[i] >= 10) {
            int tmp = min(x[i] / 10, c);
            c -= tmp;
            x[i] -= tmp * 10;
        }
        if (x[i] >= 5) {
            int tmp = min(x[i] / 5, b);
            b -= tmp;
            x[i] -= tmp * 5;
        }
        if (x[i] >= 1) {
            int tmp = min(x[i] / 1, a);
            a -= tmp;
            x[i] -= tmp * 1;
        }
    }

    bool ok = true;
    for (int i = 0; i < n; i++) if (x[i]!=0) ok = false;

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

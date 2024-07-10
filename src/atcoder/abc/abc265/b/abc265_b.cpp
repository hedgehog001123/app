#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, t;
    cin >> n >> m >> t;
    vector<long long> a(n-1);
    for (int i = 0; i < n-1; i++) cin >> a[i];
    if (m == 0) {
        int a_sum = 0;
        for (int i = 0; i < n-1; i++) a_sum += a[i];
        if (a_sum < t) {
            cout << "Yes" << endl;
            return 0;
        }
        else {
            cout << "No" << endl;
            return 0;
        }
    }
    vector<long long> x(m), y(m);
    for (int i = 0; i < m; i++) cin >> x[i] >> y[i];

    int xy_idx = 0;
    bool ok = true;
    int pos = 1;
    while (pos != n) {
        if (t > a[pos-1]) {
            t -= a[pos-1];
            pos++;
        }
        else {
            ok = false;
            break;
        }

        if (x[xy_idx] == pos) {
            t += y[xy_idx];
            xy_idx++;
        }
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

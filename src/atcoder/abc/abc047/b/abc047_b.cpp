#include <bits/stdc++.h>
using namespace std;

int main() {
    int w, h, n;
    cin >> w >> h >> n;
    vector<int> x(n), y(n), a(n);
    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i] >> a[i];
    }
    int l = 0, r = w, d = 0, u = h;
    for(int i = 0; i < n; i++) {
        if(a[i] == 1) l = max(l, x[i]);
        if(a[i] == 2) r = min(r, x[i]);
        if(a[i] == 3) d = max(d, y[i]);
        if(a[i] == 4) u = min(u, y[i]);
    }

    // cout << l << " " << r << " " << u << " " << d <<endl;
    cout << max(r - l, 0) * max(u - d, 0) << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x, t, d;
    cin >> n >> m >> x >> t >> d;

    int ans = t - d * x;
    if (m <= x) ans += d * m;
    else ans += d * x;

    cout << ans << endl;

    return 0;
}

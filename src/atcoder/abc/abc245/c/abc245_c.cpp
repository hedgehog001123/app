#include <bits/stdc++.h>
using namespace std;

bool dpa[200010], dpb[200010];
int a[200010], b[200010];

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];

    dpa[1] = true, dpb[1] = true;
    for (int i = 2; i <= n; i ++) {
        if (dpa[i-1] && abs(a[i-1]-a[i])<=k) dpa[i] = true;
        if (dpb[i-1] && abs(b[i-1]-a[i])<=k) dpa[i] = true;
        if (dpa[i-1] && abs(a[i-1]-b[i])<=k) dpb[i] = true;
        if (dpb[i-1] && abs(b[i-1]-b[i])<=k) dpb[i] = true;
    }

    if (dpa[n] || dpb[n]) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

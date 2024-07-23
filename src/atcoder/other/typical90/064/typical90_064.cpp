#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;
    if (n == 1) {
        for (int i = 0; i < q; i++) cout << 0 << endl;
        return 0;
    }
    long long huben = 0;
    vector<long long> a(n), b(n-1);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n - 1; i++) {
        b[i] = a[i+1] - a[i];
        huben += abs(b[i]);
    }
    
    for (int i = 0; i < q; i++) {
        long long l, r, v;
        cin >> l >> r >> v;
        r--;
        l--;
        long long tmp1, tmp2;
        tmp1 = abs(b[l-1]) + abs(b[r]);
        if (l >= 1) b[l-1] += v;
        if (r <= n-2) b[r] -= v;
        tmp2 = abs(b[l-1]) + abs(b[r]);
        huben += (tmp2-tmp1);
        cout << huben << endl;
    }

    return 0;
}

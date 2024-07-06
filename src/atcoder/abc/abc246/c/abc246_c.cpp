#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k, x;
    cin >> n >> k >> x;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        if (a[i] >= x) {
            long long tmp = min(a[i] / x, k);
            k -= tmp;
            a[i] -= tmp * x;
        }
    }

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
        if (k == 0) break;
        a[i] = 0;
        k--;
    }

    long long ans = 0;
    for (int i = 0; i < n; i++) ans += a[i];

    cout << ans << endl;

    return 0;
}

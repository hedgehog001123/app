#include <bits/stdc++.h>
using namespace std;

long long n;
long long a[300010];
long long mod = 100000000;

long long search(long long x) {
    long long pos = lower_bound(a + 1, a + n + 1, x) - a - 1;
    if (x > mod / 2) pos--;
    return pos;
}
 
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);

    long long ans = 0;

    long long cnt = 0;
    for (int i = 1; i <= n; i++) {
        long long tmp = search(mod - a[i]);
        // cout << tmp << endl;
        ans += a[i] * (n - 1);
        cnt += n - 1 - tmp;
    }
    // cout << cnt << endl;
    ans -= (cnt / 2) * mod;

    cout << ans << endl;
    // cout << cnt << " :cnt" << endl;

    return 0;
}

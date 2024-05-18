#include <bits/stdc++.h>
using namespace std;

    int n, k;
    int a[100010];
    int ruisekiwa[100010];
    int r[100010];

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    // 累積和
    for (int i = 1; i <= n; i++) {
        if (i == 1) ruisekiwa[i] = a[i];
        else ruisekiwa[i] = ruisekiwa[i-1] + a[i];
    }

    // しゃくとり法
    for (int i = 1; i <= n; i++) {
        if (i == 1) r[i] = 1;
        else r[i] = r[i-1];

        while (ruisekiwa[r[i]] - ruisekiwa[i - 1] <= k && r[i] <= n) {
            r[i]++;
        }
    }

    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += r[i] - i;
        // cout << ans << endl;
    }

    cout << ans << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
const int INF = 1 << 30;

int n;
int a[101010], b[101010], dp[101010];

int main() {
    cin >> n;
    for (int i = 1; i <= n - 1; i++) cin >> a[i];
    for (int i = 1; i <= n - 1; i++) cin >> b[i];

    dp[1] = 0;
    for (int i = 2; i <= n; i++) dp[i] = -INF;

    for (int i = 1; i <= n - 1; i++) {
        dp[a[i]] = max(dp[a[i]], dp[i] + 100);
        dp[b[i]] = max(dp[b[i]], dp[i] + 150);
    }
    cout << dp[n] << endl;

    return 0;
}

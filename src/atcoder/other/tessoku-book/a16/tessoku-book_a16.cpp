#include <bits/stdc++.h>
using namespace std;

int a[100010], b[100010];
int dp[100010];

int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) cin >> a[i];
    for (int i = 3; i <= n; i++) cin >> b[i];

    dp[1] = 0;
    dp[2] = a[2];

    for (int i = 3; i <= n; i++) {
        dp[i] = min(dp[i-1] + a[i], dp[i-2] + b[i]);
    }

    cout << dp[n] << endl;

    return 0;
}

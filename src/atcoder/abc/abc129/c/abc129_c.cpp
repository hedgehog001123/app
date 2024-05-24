#include <bits/stdc++.h>
using namespace std;

int n, m;
int is_ng[101010];
int dp[101010];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int tmp;
        cin >> tmp;
        is_ng[tmp] = true;
    }

    dp[0] = 1;
    if (is_ng[1]) dp[1] = 0;
    else dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        if (!is_ng[i-1]) dp[i] += dp[i-1];
        if (!is_ng[i-2]) dp[i] += dp[i-2];

        dp[i] %= 1000000007;
    }

    cout << dp[n] << endl;

    return 0;
}

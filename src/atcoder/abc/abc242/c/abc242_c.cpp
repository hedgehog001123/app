#include <bits/stdc++.h>
using namespace std;

const int mod = 998244353;
int dp[11][1001000];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= 9; i++) dp[i][1] = 1;

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= 9; j++) {
            dp[j][i] += dp[j-1][i-1]%mod;
            dp[j][i] %= mod;
            dp[j][i] += dp[j][i-1]%mod;
            dp[j][i] %= mod;
            dp[j][i] += dp[j+1][i-1]%mod;
            dp[j][i] %= mod;
        }
    }

    long long ans = 0;
    for (int i = 1; i <= 9; i++) {
        ans += dp[i][n];
        ans %= mod;
    }
    cout << ans%mod << endl;

    return 0;
}

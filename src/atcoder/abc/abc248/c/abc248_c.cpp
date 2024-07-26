#include <bits/stdc++.h>
using namespace std;

const int mod = 998244353;

long long dp[60][3000];

int main() {
    long long n, m, K;
    cin >> n >> m >> K;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= K; j++) dp[i][j] = 0;
    }
    dp[0][0] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < K; j++) {
            for (int k = 1; k <= m; k++) {
                if (j + k <= K) {
                    dp[i+1][j+k] += dp[i][j];
                    dp[i+1][j+k] %= mod;
                }
            }
        }
    }

    long long ans = 0;
    for (int i = 1; i <= K; i++) {
        ans += dp[n][i];
        ans %= mod;
    }
    cout << ans << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

// dp[l][r]: l番目からr番目までのブロックが乗っている状態で、最大何点を稼ぐことができるか。
// d[1][n] = 0;
int dp[2010][2010];
int p[2010], a[2010];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> p[i] >> a[i];

    dp[1][n] = 0;
    for (int LEN = n; LEN >= 0; LEN--) {
        for (int l = 1; l <= n - LEN; l++) {
            int r = l + LEN;

            int score1 = 0;
            if (l <= p[l-1] && p[l-1] <= r) score1 += a[l-1];

            int score2 = 0;
            if (l <= p[r+1] && p[r+1] <= r) score2 += a[r+1];

            if (l == 1) {
                dp[l][r] = dp[l][r+1] + score2;
            }
            else if (r == n) {
                dp[l][r] = dp[l-1][r] + score1;
            }
            else {
                dp[l][r] = max(dp[l-1][r]+score1, dp[l][r+1]+score2);
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) ans = max(ans, dp[i][i]);
    cout << ans << endl;

    return 0;
}

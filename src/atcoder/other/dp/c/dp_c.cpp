#include <bits/stdc++.h>
using namespace std;

int dp[3][101010];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < 2; i++) dp[i][0] = 0;

    for (int i = 1; i <= n; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        dp[0][i] = max(dp[1][i-1]+a, dp[2][i-1]+a);
        dp[1][i] = max(dp[0][i-1]+b, dp[2][i-1]+b);
        dp[2][i] = max(dp[0][i-1]+c, dp[1][i-1]+c);
    }

    cout << max(dp[0][n], max(dp[1][n], dp[2][n])) << endl;

    return 0;
}

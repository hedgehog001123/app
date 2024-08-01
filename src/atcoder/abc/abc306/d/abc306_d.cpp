#include <bits/stdc++.h>
using namespace std;

long long dp[2][301010]; // dp[0][]正常, dp[1][]お腹壊してる

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];

    dp[0][0] = 0, dp[1][0] = 0;

    for (int i = 0; i < n; i++) {
        if (x[i] == 0) {
            // 解毒剤入り
            dp[0][i+1] = max({dp[0][i], dp[0][i] + y[i], dp[1][i] + y[i]});
            dp[1][i+1] = dp[1][i];
        }
        if (x[i] == 1) {
            // 毒入り
            dp[0][i+1] = dp[0][i];
            dp[1][i+1] = max(dp[1][i], dp[0][i] + y[i]);
        }
    }

    cout << max(dp[0][n], dp[1][n]) << endl;

    return 0;
}

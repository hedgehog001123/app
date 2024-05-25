#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int h[101010];
int dp[101010];

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> h[i];

    for (int i = 0; i < 101010; i++) dp[i] = INF;
    dp[1] = 0;

    for (int i = 2; i <= n; i++) {
        int tmp = INF;
        for (int j = 1; j <= k; j++) {
            if (i-j >= 1) {
                tmp = min(tmp, dp[i-j] + abs(h[i]-h[i-j]));
                // test
                // cout <<"test" << dp[i-j] <<",,,"<<abs(h[i]-h[i-j])<<endl;
            }
        }
        
        dp[i] = tmp;
    }

    // テスト
    // for (int i = 1; i <= n; i++) cout << dp[i] << endl;

    cout << dp[n] << endl;

    return 0;
}

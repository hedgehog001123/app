#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;

int N;
int h[100009];
// dp[i]: 足場iに辿り着くまでに支払うコストの総和の最小値
int dp[100009];

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> h[i];

    // 初期化
    for (int i = 0; i < 100009; i++) dp[i] = INF;
    dp[1] = 0;
    dp[2] = abs(h[2]-h[1]);

    // 動的計画法
    for (int i = 3; i <= N; i++) {
        dp[i] = min(abs(h[i]-h[i-1])+dp[i-1], abs(h[i]-h[i-2])+dp[i-2]);
    }

    // 出力
    cout << dp[N] << endl;

    return 0;
}

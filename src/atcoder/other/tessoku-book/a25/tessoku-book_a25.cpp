#include <bits/stdc++.h>
using namespace std;

char c[32][32];
long long dp[32][32];

int main() {
    long long h, w;
    cin >> h >> w;

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) cin >> c[i][j];
    }

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            if (i == 1 && j == 1) {
                dp[i][j] = 1;
            }
            else {
                dp[i][j] = 0; // 初期化
                if (i >= 2 && c[i-1][j] == '.') dp[i][j] += dp[i-1][j];
                if (j >= 2 && c[i][j-1] == '.') dp[i][j] += dp[i][j-1];
            }
        }
    }
    cout << dp[h][w] << endl;

    return 0;
}

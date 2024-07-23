#include <bits/stdc++.h>
using namespace std;

long long dp[101010];
const long long mod = 1000000007;

int main() {
    int n, l;
    cin >> n >> l;

    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        dp[i] += dp[i-1];
        if (i-l >= 0) dp[i] += dp[i-l];
        dp[i] %= mod;
    }
    
    cout << dp[n] << endl;

    return 0;
}

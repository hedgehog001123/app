#include <bits/stdc++.h>
using namespace std;

const long long mod = 998244353;
long long dp[101010][10];

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 1; i <= N; i++) cin >> A[i];

    for (int i = 0; i <= 9; i++) dp[1][i] = 0;
    dp[1][A[1]] = 1;

    for (int i = 2; i <= N; i++) {
        for (int j = 0; j <= 9; j++) {
            dp[i][(j+A[i])%10] += (dp[i-1][j])%mod;
            dp[i][(j+A[i])%10] %= mod;
            dp[i][(j*A[i])%10] += (dp[i-1][j])%mod;
            dp[i][(j*A[i])%10] %= mod;
        }
    }

    for (int i = 0; i <= 9; i++) cout << (dp[N][i])%mod << endl;

    return 0;
}

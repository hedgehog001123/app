#include <bits/stdc++.h>
using namespace std;

const int mod = 998244353;

// k = 1 のときN個
// k = 2 のときN(N-1)/2個

// dp[i][j]: 今回がi個目で、位置jが何通りあるか。
// dp[i+1][k] = dp[i][j] * (位置j以降のnextの個数);
long long dp[10000][100];

int main() {
    int n;
    cin >> n;
    vector<long long> a(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    map<int, vector<int>> m;
    for (int i = 1; i <= n; i++) {
        m[a[i]].push_back(i);
    }

    map<int, int> next;

    for (int i = 1; i <= n; i++) {
        for (int j = i+1; j <= n; j++) {
            next[i * 100 + j] = a[j]-a[i]+a[j];
        }
    }

    // mapの中身を出力。テスト用
    // for (auto& [key, value]: m) {
    //     cout << key << ": ";
    //     for (int i = 0; i < value.size(); i++) cout << value[i] << " ";
    //     cout << endl;
    // }

    vector<int> ans(n + 1);
    for (int i = 1; i <= n; i++) ans[i] = 0;
    ans[1] = n;
    ans[2] = n*(n-1)/2;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) ans[i] += dp[i][j];
    }
    for (int i = 1; i <= n; i++) {
        cout << ans[i];
        if (i != n) cout << " ";
    }

    return 0;
}

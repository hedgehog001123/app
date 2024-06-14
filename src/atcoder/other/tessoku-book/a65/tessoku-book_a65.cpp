#include <bits/stdc++.h>
using namespace std;

int N;
int A[101010], dp[101010];
vector<int> G[101010];

int main() {
    cin >> N;
    for (int i = 2; i <= N; i++) {
        cin >> A[i];
        G[A[i]].push_back(i);
    }

    for (int i = N; i >= 1; i--) {
        dp[i] = 0;
        for (int j = 0; j < G[i].size(); j++) dp[i] +=(dp[G[i][j]]+1);
    }

    for (int i = 1; i <= N; i++) {
        if (i >= 2) cout << endl;
        cout << dp[i];
    }

    cout << endl;

    return 0;
}

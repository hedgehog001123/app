#include <bits/stdc++.h>
using namespace std;

bool dp[251010][60];

int main() {
    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        p.push_back(make_pair(a, b));
    }
    sort(p.rbegin(), p.rend());

    dp[0][0] = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= p[i].second; j++) {
            for (int k = 0; k <= x; k++) {
                if (dp[k][i] == true) {
                    dp[k + p[i].first * j][i+1] = dp[k][i];
                }
            }
        }
    }

    if (dp[x][n]) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

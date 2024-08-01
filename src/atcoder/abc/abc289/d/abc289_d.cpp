#include <bits/stdc++.h>
using namespace std;

bool dp[201010];
bool mochi[201010];

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) cin >> b[i];
    int x;
    cin >> x;

    for (int i = 0; i <= x; i++) dp[i] = false;
    for (int i = 0; i <= x; i++) mochi[i] = false;
    for (int i = 0; i < m; i++) mochi[b[i]] = true;
    dp[0] = true;

    for (int i = 0; i <= x; i++) {
        if (dp[i] == true) {
            for (int j = 0; j < n; j++) {
                if (mochi[i + a[j]] == false) dp[i + a[j]] = true;
            }
        }
    }

    if (dp[x]) cout << "Yes" << endl;
    else cout << "No" << endl;



    return 0;
}

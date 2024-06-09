#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> H(n);
    for (int i = 0; i < n; i++) cin >> H[i];

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (m >= H[i]) {
            m -= H[i];
            ans++;
        } else {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}

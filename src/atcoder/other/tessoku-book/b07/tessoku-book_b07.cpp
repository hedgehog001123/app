#include <bits/stdc++.h>
using namespace std;

int zougen[500100], ans[500100];

int main() {
    int t, n;
    cin >> t >> n;
    for(int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        zougen[l]++;
        zougen[r]--;
    }

    ans[0] = 0;
    for(int i = 1; i <= t; i++) {
        ans[i] = ans[i - 1] + zougen[i - 1];
        cout << ans[i] << endl;
    }

    return 0;
}

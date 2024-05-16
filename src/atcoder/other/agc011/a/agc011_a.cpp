#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c, k;
    cin >> n >> c >> k;
    vector<int> t(n);
    for (int i = 0; i < n; i++) cin >> t[i];
    sort(t.begin(), t.end());

    int ans = 0;

    for (int i = 0; i < n;) {
        ans++;
        int start = i;
        while (i < n && t[i] <= k + t[start] && i < c + start) i++;
    }

    cout << ans << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

bool ok[1000010];

int main() {
    int n, w;
    cin >> n >> w;
    vector<int> a(n+2);
    for (int i = 0; i < n; i++) cin >> a[i];
    a[n] = 0, a[n+1] = 0;

    for (int i = 0; i <= w; i++) ok[i] = false;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n+1; j++) {
            for (int k = j+1; k < n+2; k++) {
                if (a[i]+a[j]+a[k] >= 1000005) continue;
                ok[a[i]+a[j]+a[k]] = true;
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= w; i++) {
        if (ok[i]) ans++;
    }

    cout << ans << endl;

    return 0;
}

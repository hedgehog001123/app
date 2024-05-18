#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[100010], r[100010];

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];

    long long ans = 0;

    for (int i = 1; i <= n-1; i++) {
        if (i==1) r[i] = 1;
        else r[i] = r[i-1];
        
        while (r[i] <= n-1 && a[r[i]+1] - a[i] <= k) {
            r[i]++;
        }
    }

    for (int i = 1; i <= n-1; i++) {
        ans += r[i] - i;
    }

    cout << ans << endl;

    return 0;
}

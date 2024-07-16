#include <bits/stdc++.h>
using namespace std;

int main() {
    // D枚がP円
    long long n, d, p;
    cin >> n >> d >> p;
    vector<long long> f(n);
    for (int i = 0; i < n; i++) cin >> f[i];
    sort(f.rbegin(), f.rend());
    
    long long ans = 0;
    for (int i = 0; i < n; i++) ans += f[i];

    int idx = 0;
    while (idx < n) {
        long long tmpsum = 0;
        for (int i = idx; i < d + idx; i++) {
            if (i == n) break;
            tmpsum += f[i];
        }
        if (tmpsum > p) {
            ans = ans - tmpsum + p;
            idx += d;
        }
        else break;
    }

    cout << ans << endl;

    return 0;
}

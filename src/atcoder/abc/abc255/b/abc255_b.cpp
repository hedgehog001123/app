#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    for (int i = 0; i < k; i++) cin >> a[i];
    vector<long long> x(n), y(n);
    vector<long long> r2(n);
    for (int i = 0; i < n; i++) r2[i] = 909090909090;
    for (int i = 0; i < k; i++) {
        r2[a[i]-1] = 0;
    }
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];

    for (int i = 0; i < n; i++) {
        if (r2[i] == 0) {
            for (int j = 0; j < n; j++) {
                if (i == j) continue;
                r2[j] = min(r2[j], (x[j]-x[i])*(x[j]-x[i])+(y[j]-y[i])*(y[j]-y[i]));
            }
        }
    }

    long long ans2 = 0;
    // for (int i = 0; i < n; i++) cout << r2[i] << endl;
    for (int i = 0; i < n; i++) ans2 = max(ans2, r2[i]);

    // cout << ans2 << endl;
    printf("%.17f\n", sqrt(ans2));



    return 0;
}

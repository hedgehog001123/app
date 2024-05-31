#include <bits/stdc++.h>
using namespace std;

int lim[400];

int main() {
    int d, n;
    cin >> d >> n;
    vector <int> l(n), r(n), h(n);
    for (int i = 0; i < n; i++) cin >> l[i] >> r[i] >> h[i];

    for (int i = 0; i < 400; i++) lim[i] = 24;

    for (int i = 0; i < n; i++) {
        for (int j = l[i]-1; j < r[i]; j++) {
            lim[j] = min(lim[j], h[i]);
        }
    }

    int ans = 0;
    for (int i = 0; i < d; i++) {
        ans += lim[i];
    }
    cout << ans << endl;

    return 0;
}

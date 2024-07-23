#include <bits/stdc++.h>
using namespace std;

long long a[46], b[46], c[46];

int main() {
    long long n;
    cin >> n;
    for (int i = 0; i < 46; i++) {
        a[i] = 0;b[i] = 0;c[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        long long p;cin >> p;
        a[p % 46]++;
    }
    for (int i = 0; i < n; i++) {
        long long p;cin >> p;
        b[p % 46]++;
    }
    for (int i = 0; i < n; i++) {
        long long p;cin >> p;
        c[p % 46]++;
    }

    long long ans = 0;
    for (int i = 0; i < 46; i++) {
        for (int j = 0; j < 46; j++) {
            int k = (92 - i - j) % 46;
            ans += a[i] * b[j] * c[k];
        }
    }

    cout << ans << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int mod_100[105];

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < 100; i++) mod_100[i] = 0;
    for (int i = 0; i < n; i++) {
        mod_100[a[i] % 100]++;
    }

    long long ans = 0;
    ans += mod_100[0] * (mod_100[0] - 1) / 2;
    ans += mod_100[50] * (mod_100[50] - 1) / 2;
    for (int i = 1; i <= 49; i++) {
        ans += mod_100[i] * mod_100[100-i];
    }

    cout << ans << endl;

    return 0;
}

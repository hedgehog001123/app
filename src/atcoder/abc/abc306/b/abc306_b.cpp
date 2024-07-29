#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(64);
    for (int i = 0; i < 64; i++) cin >> a[i];

    unsigned long long ans = 0;

    for (int i = 0; i < 64; i++) {
        ans*=2;
        ans += a[63-i];
    }

    cout << ans << endl;

    return 0;
}

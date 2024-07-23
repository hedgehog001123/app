#include <bits/stdc++.h>
using namespace std;

const long long mod = 1000000007;

int main() {
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        b[i] = 0;
        for (int j = 0; j < 6; j++) {
            int a;
            cin >> a;
            b[i] += a;
        }
    }

    long long ans = 1;
    for (int i = 0; i < n; i++) {
        ans *= b[i];
        ans %= mod;
    }

    cout << ans << endl;

    return 0;
}

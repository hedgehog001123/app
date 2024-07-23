#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(2*n);

    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        v[2 * i] = b;
        v[2 * i + 1] = a - b;
    }
    long long ans = 0;
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < k; i++) ans += v[i];

    cout << ans << endl;

    return 0;
}

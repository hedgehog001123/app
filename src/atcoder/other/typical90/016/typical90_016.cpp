#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> a(3);
    for (int i = 0; i < 3; i++) cin >> a[i];
    sort(a.begin(), a.end());

    long long tmp = n;
    int ans = 9999;
    for (int i = 9999; i >= 0; i--) {
        for (int j = 9999; j >= 0; j--) {
            int k = (tmp - i * a[2] - j * a[1]) / a[0];
            if (k < 0) continue;
            if (i * a[2] + j * a[1] + k * a[0] == n) {
                ans = min(ans, i + j + k);
            }
        }
    }
    cout << ans << endl;

    return 0;
}

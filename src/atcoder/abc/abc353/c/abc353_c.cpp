#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int ans = 0;

    // auto itr = lower_bound(a.begin(), a.end(), 5);
    // int idx = distance(a.begin(), itr);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        auto itr = lower_bound(a.begin(), a.end(), 100000000 - a[i] + 1);
        int idx = distance(a.begin(), itr);
        // ans += ( n - idx ) * (a[i] % 100000000) + ( idx - 1 ) * a[i];
        ans += ( n - 1 ) * a[i];
        cnt += n - idx;
    }
    // cout << cnt - n << endl;

    ans -= (cnt / 2) * 100000000;

    cout << ans << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    // 長さN-Kの数列B
    int ans = 2'000'000'010;

    // (1,3,4,5,9),2...min({4-1, 5-3, 9-4});
    // (1,2,3,4,5,6),2...min({4-1,5-2,6-3})
    // k+1 kai

    for (int i = 0; i < k+1; i++) {
        ans = min(ans, a[n-k-1 + i]-a[i]);
    }

    cout << ans << endl;

    return 0;
}

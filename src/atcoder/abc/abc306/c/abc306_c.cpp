#include <bits/stdc++.h>
using namespace std;

int cnt[101010];

int main() {
    int n;
    cin >> n;
    vector<int> a(3 * n);
    vector<int> ans;
    for (int i = 0; i < 3 * n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i <= n; i++) cnt[i] = 0;
    for (int i = 0; i < 3 * n; i++) {
        cnt[a[i]]++;
        if (cnt[a[i]] == 2) ans.push_back(a[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i];
        if (i != n-1) cout << " ";
    }
    cout << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> t;
    for (int i = 0; i < n; i++) t.push_back(a[i]);
    sort(t.begin(), t.end());

    // 配列Tの重複を消す
    t.erase(unique(t.begin(), t.end()), t.end());

    for (int i = 0; i < n; i++) {
        b[i] = lower_bound(t.begin(), t.end(), a[i]) - t.begin();
        b[i] += 1;
    }

    for (int i = 0; i < n; i++) {
        if (i >= 1) cout << " ";
        cout << b[i];
    }
    cout << endl;

    return 0;
}

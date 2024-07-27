#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), sorted(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sorted[i] = a[i];
    }
    sort(sorted.begin(), sorted.end());

    vector<vector<int>> tmp(k);
    for (int i = 0; i < n; i++) {
        tmp[i%k].push_back(a[i]);
    }
    for (int i = 0; i < k; i++) {
        sort(tmp[i].begin(), tmp[i].end());
    }

    bool ok = true;
    for (int i = 0; i < n; i++) {
        if (sorted[i] != tmp[i%k][i/k]) ok = false;
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

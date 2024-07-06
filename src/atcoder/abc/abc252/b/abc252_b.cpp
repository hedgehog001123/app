#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(k);
    int ma = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ma = max(ma, a[i]);
    }
    for (int i = 0; i < k; i++) cin >> b[i];
    vector<int> c;
    for (int i = 0; i < n; i++) {
        if (ma == a[i]) c.push_back(i+1);
    }

    bool ok = false;
    for (int i = 0; i < (int)c.size(); i++) {
        for (int j = 0; j < k; j++) {
            if (c[i] == b[j]) ok = true;
        }
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

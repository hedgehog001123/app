#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m), current(m);
    for (int i = 0; i < m; i++) cin >> a[i];
    for (int i = 0; i < m; i++) current[i] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int tmp;
            cin >> tmp;
            current[j] += tmp;
        }
    }

    bool ok = true;
    for (int i = 0; i < m; i++) {
        if (a[i] > current[i]) ok = false;
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

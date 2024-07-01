#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    int idx = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == b[idx]) {
            idx++;
            cout << "Yes" << endl;
            continue;
        }
        cout << "No" << endl;
    }

    return 0;
}

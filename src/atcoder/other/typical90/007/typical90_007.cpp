#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> q;
    vector<int> b(q);
    for (int i = 0; i < q; i++) cin >> b[i];
    sort(a.begin(), a.end());
    
    for (int i = 0; i < q; i++) {
        int pos = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
        if (pos == 0) {
            cout << abs(a[0]-b[i]) << endl;
            continue;
        }
        if (pos == n) {
            cout << abs(a[n-1]-b[i]) << endl;
            continue;
        }
        cout << min(abs(a[pos]-b[i]), abs(a[pos-1]-b[i])) << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int b;
        cin >> b;
        if (b == 1) {
            int k, x;
            cin >> k >> x;
            a[k-1] = x;
        }
        if (b == 2) {
            int k;
            cin >> k;
            cout << a[k-1] << endl;
        }
    }

    return 0;
}

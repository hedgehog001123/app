#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        if (p <= i+1 && i+1 <= q) swap(a[i], a[r-p+i]);
    }

    for (int i = 0; i < n; i++) cout << a[i] << endl;

    return 0;
}

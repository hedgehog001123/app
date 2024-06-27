#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> x(q);
    for (int i = 0; i < q; i++) cin >> x[i];
    sort(a.begin(), a.end());

    for (int i = 0; i < q; i++) {
        int tmp = lower_bound(a.begin(), a.end(), x[i]) - a.begin();
        cout << n - tmp << endl;
    }

    return 0;
}

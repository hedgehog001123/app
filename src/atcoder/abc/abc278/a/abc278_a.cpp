#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    if (n <= k) {
        for (int i = 0; i < n; i++) {
            cout << 0;
            if (i != n-1) cout << " ";
        }
        return 0;
    }
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = k; i < n; i++) {
        cout << a[i] << " ";
    }
    for (int i = 0; i < k; i++) {
        cout << 0;
        if (i != k-1) cout << " ";
    }
    cout << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(7* n);
    for (int i = 0; i < 7 * n; i++) cin >> a[i];
    vector<int> b(n);
    for (int i = 0; i < 7 * n; i++) {
        b[i/7] += a[i];
    }

    for (int i = 0; i < n; i++) {
        cout << b[i];
        if (i != n-1) cout << " ";
    }
    cout << endl;

    return 0;
}

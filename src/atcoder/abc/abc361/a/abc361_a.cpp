#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        cout << a[i];
        cout << " ";
        if (i == k - 1) cout << x << " ";
    }
    cout << endl;

    return 0;
}

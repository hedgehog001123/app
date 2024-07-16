#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];
    if (n == 1) {
        cout << -1 << endl;
        return 0;
    }

    for (int i = 1; i < n; i++) {
        if (x[i]-x[i-1] <= d) {
            cout << x[i] << endl;
            break;
        }
        if (i == n-1) cout << -1 << endl;
    }

    return 0;
}

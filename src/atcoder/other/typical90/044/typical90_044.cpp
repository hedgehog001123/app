#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int shift = 0;

    for (int i = 0; i < q; i++) {
        int t, x, y;
        cin >> t >> x >> y;
        x--;
        y--;

        if (t == 1) {
            swap(a[(x-shift+n)%n], a[(y-shift+n)%n]);
        }
        if (t == 2) {
            shift++;
            shift %= n;
        }
        if (t == 3) {
            cout << a[(x-shift+n)%n] << endl;
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int q;
    cin >> q;
    vector<int> gyou(n);
    for (int i = 0; i < n; i++) gyou[i] = i;

    for (int i = 0; i < q; i++) {
        int w, x, y;
        cin >> w >> x >> y;
        x--;
        y--;
        if (w == 1) {
            int tmp = gyou[x];
            gyou[x] = gyou[y];
            gyou[y] = tmp; 
        };
        if (w == 2) {
            cout << a[gyou[x]][y] << endl;
        };
    }

    return 0;
}

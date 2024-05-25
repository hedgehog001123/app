#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, t;
    cin >> n >> t;
    vector<long long> a(t);
    for (int i = 0; i < t; i++) cin >> a[i];
    // 0-index...N * i + j - 1
    vector<vector<bool>> b(n, vector<bool>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) b[i][j] = false; 
    }

    long long cnt = 0;
    for (int i = 0; i < t; i++) {
        // マスをあける
        long long x, y;
        x = (a[i]-1) / n;
        y = (a[i]-1) % n;
        b[x][y] = true;
        cnt++;
        // cout << "b[" << x << "][" << y << "]をあける" << endl;
        if (i <= n - 2) continue;

        // 1列揃ったかチェック
        bool tate = true;
        for (int j = 0; j < n; j++) {
            if (!b[j][y]) tate = false;
        }
        if (tate) {
            cout << cnt << endl;
            return 0;
        }

        bool yoko = true;
        for (int j = 0; j < n; j++) {
            if (!b[x][j]) yoko = false;
        }
        if (yoko) {
            cout << cnt << endl;
            return 0;
        }

        if ((a[i]-1) % (n + 1) == 0) {
            bool naname_hidariue = true;
            for (int j = 0; j < n; j++) {
                if (!b[j][j]) naname_hidariue = false;
            }
            if (naname_hidariue) {
                cout << cnt << endl;
                return 0;
            }
        }

        if ((a[i]-1) % (n - 1) == 0) {
            bool naname_migiue = true;
            for (int j = 0; j < n; j++) {
                if (!b[j][n - 1 - j]) naname_migiue = false;
            }
            if (naname_migiue) {
                cout << cnt << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;

    return 0;
}

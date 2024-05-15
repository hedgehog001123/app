#include <bits/stdc++.h>
using namespace std;

int x[1510][1510], ruisekiwa[1510][1510];
int a[100010], b[100010], c[100010], d[100010];

int main() {
    int h, w;
    cin >> h >> w;
    for (int i = 0; i <= h; i++) {
        for (int j = 0; j <= w; j++) {
            ruisekiwa[i][j] = 0;
            x[i][j] = 0;
        }
    }

    for(int i = 1; i <= h; i++) {
        for(int j = 1; j <= w; j++){
            cin >> x[i][j];
        }
    }

    int q;
    cin >> q;
    for (int i = 1; i <= q; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];

    // 横方向に累積和をとる
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            ruisekiwa[i][j] = ruisekiwa[i][j - 1] + x[i][j];
        }
    }

    // 縦方向に累積和をとる
    for (int j = 1; j <= w; j++) {
        for (int i = 1; i <= h; i++) {
            ruisekiwa[i][j] = ruisekiwa[i - 1][j] + ruisekiwa[i][j];
        }
    }

    for (int i = 1; i <= q; i++) {
        cout << ruisekiwa[c[i]][d[i]] + ruisekiwa[a[i]-1][b[i]-1] - ruisekiwa[c[i]][b[i]-1] - ruisekiwa[a[i]-1][d[i]] << endl;
    }
    return 0;
}

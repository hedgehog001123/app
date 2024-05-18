#include <bits/stdc++.h>
using namespace std;

int n, q;
int x[100010], y[100010], a[100010], b[100010], c[100010], d[100010];

int cnt[1520][1520];
int ruisekiwa[1520][1520];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> x[i] >> y[i];
    cin >> q;
    for (int i = 1; i <= q; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];

    for (int i = 1; i <= n; i++) {
        cnt[x[i]][y[i]]++;
    }

    for (int i = 0; i <= 1500; i++) for (int j = 0; j <= 1500; j++) ruisekiwa[i][j] = 0;

    for (int i = 1; i <= 1500; i++) {
        for (int j = 1; j <= 1500; j++) {
            ruisekiwa[i][j] = ruisekiwa[i][j - 1] + cnt[i][j]; 
        }
    }

    for (int i = 1; i <= 1500; i++) {
        for (int j = 1; j <= 1500; j++) {
            ruisekiwa[i][j] = ruisekiwa[i - 1][j] + ruisekiwa[i][j]; 
        }
    }

    // // ruisekiwaチェック
    // for (int i = 1; i <= 5; i++) {
    //     for (int j = 1; j <= 7; j++) {
    //         cout << ruisekiwa[i][j];
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= q; i++) {
        cout << ruisekiwa[c[i]][d[i]] + ruisekiwa[a[i]-1][b[i]-1] - ruisekiwa[c[i]][b[i]-1] - ruisekiwa[a[i]-1][d[i]] << endl;
    }

    return 0;
}

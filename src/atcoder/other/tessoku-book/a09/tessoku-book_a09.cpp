#include <bits/stdc++.h>
using namespace std;

int a[100010], b[100010], c[100010], d[100010];
int x[1510][1510], z[1510][1510];

int main() {
    int h, w, n;
    cin >> h >> w >> n;
    for (int i = 1; i <= n; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];

    for (int i = 1; i <= n; i++) {
        x[a[i]][b[i]]++;
        x[c[i]+1][d[i]+1]++;
        x[a[i]][d[i]+1]--;
        x[c[i]+1][b[i]]--;
    }

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            z[i][j] = z[i][j - 1] + x[i][j];
        }
    }

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            z[i][j] = z[i - 1][j] + z[i][j];
        }
    }

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            cout << z[i][j];
            if (j < w) cout << " ";
            else cout << endl;
        }
    }

    return 0;
}

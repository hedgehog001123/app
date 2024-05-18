#include <bits/stdc++.h>
using namespace std;

int n;
int a[100010], b[100010], c[100010], d[100010];

int z[1510][1510];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];

    for (int i = 0; i <= 1500; i++) {
        for (int j = 0; j <= 1500; j++) {
            z[i][j] = 0;
        }
    }

    for (int i = 1; i <= n; i++) {
        z[a[i]][b[i]]++;
        z[c[i]][d[i]]++;
        z[a[i]][d[i]]--;
        z[c[i]][b[i]]--;
    }

    for (int i = 0; i <= 1500; i++) {
        for (int j = 1; j <= 1500; j++) {
            z[i][j] = z[i][j - 1] + z[i][j];
        }
    }

    for (int i = 1; i <= 1500; i++) {
        for (int j = 0; j <= 1500; j++) {
            z[i][j] = z[i - 1][j] + z[i][j];
        }
    }
    
    int ans = 0;
    for (int i = 0; i <= 1500; i++) {
        for (int j = 0; j <= 1500; j++) {
            if (z[i][j] >= 1) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}

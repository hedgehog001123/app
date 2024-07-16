#include <bits/stdc++.h>
using namespace std;

bool menseki[110][110];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            menseki[i][j] = false;
        }
    }

    for (int i = 0; i < n; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for (int x = a; x < b; x++) {
            for (int y = c; y < d; y++) {
                menseki[x][y] = true;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (menseki[i][j]) ans++;
        }
    }
    cout << ans << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

bool ok[55][55];

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int b;
            cin >> b;
            b--;
            a[i][j] = b;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) ok[i][j] = false;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n-1; j++) {
            ok[a[i][j]][a[i][j+1]] = true;
            ok[a[i][j+1]][a[i][j]] = true;
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (ok[i][j] == false) cnt++;
        }
    }

    cout << cnt / 2 << endl;

    return 0;
}

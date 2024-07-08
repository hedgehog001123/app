#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> p = {-1, -1, -1, 0, 0, 1, 1, 1},
                q = {-1, 0, 1, -1, 1, -1, 0, 1};
    vector<vector<long long>> A(n, vector<long long>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char a;
            cin >> a;
            A[i][j] = (a - '0');
        }
    }

    long long ans = 0;
    // i, j...初期位置
    // k...向かう方向
    // l...n回進む
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x = i, y = j;
            for (int k = 0; k < 8; k++) {
                long long ma = A[x][y];
                for (int l = 0; l < n; l++) {
                    ma *= 10;
                    x += p[k];
                    y += q[k];
                    x = (x+n)%n;
                    y = (y+n)%n;
                    ma += A[x][y];
                    // cout << "a" << endl;
                }
                ans = max(ans, ma);
            }
        }
    }

    cout << ans / 10 << endl;

    return 0;
}

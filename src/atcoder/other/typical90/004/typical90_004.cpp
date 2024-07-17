#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) cin >> a[i][j];
    }

    vector<int> p(h), q(w);
    for (int i = 0; i < h; i++) p[i] = 0;
    for (int i = 0; i < w; i++) q[i] = 0;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            p[i] += a[i][j];
            q[j] += a[i][j];
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << p[i] + q[j] - a[i][j];
            if (j != w-1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}

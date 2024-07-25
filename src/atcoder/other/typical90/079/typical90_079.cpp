#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    vector<vector<int>> b(h, vector<int>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> b[i][j];
        }
    }
    long long ans = 0;

    for (int i = 0; i < h-1; i++) {
        for (int j = 0; j < w-1; j++) {
            if (a[i][j] == b[i][j]) continue;
            int diff = b[i][j] - a[i][j];
            a[i][j] += diff;
            a[i+1][j] += diff;
            a[i][j+1] += diff;
            a[i+1][j+1] += diff;
            ans += abs(diff);
        }
    }
    bool ok = true;
    for (int i = 0; i < h; i++) {
        if (a[i][w-1] != b[i][w-1]) ok = false;
    }
    for (int i = 0; i < w; i++) {
        if (a[h-1][i] != b[h-1][i]) ok = false;
    }
    
    if (!ok) {
        cout << "No" << endl;
        return 0;
    }
    
    cout << "Yes" << endl;
    cout << ans << endl;

    return 0;
}

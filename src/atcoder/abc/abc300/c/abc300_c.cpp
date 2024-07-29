#include <bits/stdc++.h>
using namespace std;

char c[110][110];

int main() {
    int h, w;
    cin >> h >> w;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) cin >> c[i][j];
    }
    int n = min(h, w);
    vector<int> sum(n);
    for (int i = 0; i < n; i++) sum[i] = 0;

    vector<pair<int, int>> center;
    for (int i = 0; i < h-2; i++) {
        for (int j = 0; j < w-2; j++) {
            if (c[i][j]=='#' && c[i][j+1]=='.' && c[i][j+2]=='#'
                && c[i+1][j]=='.' && c[i+1][j+1]=='#' && c[i+1][j+2]=='.'
                && c[i+2][j]=='#' && c[i+2][j+1]=='.' && c[i+2][j+2]=='#') {
                    center.push_back(make_pair(i+1, j+1));
                }
        }
    }

    for (int i = 0; i < (int)center.size(); i++) {
        int tmp = -1;
        int x = center[i].first;
        int y = center[i].second;
        for (int j = 0; j < 80; j++) {
            x++;
            y++;
            if (x >= h || y >= w || c[x][y] == '.') {
                break;
            }
            tmp++;
        }
        sum[tmp]++;
    }

    for (int i = 0; i < n; i++) {
        cout << sum[i];
        if (i != n-1) cout << " ";
    }
    cout << endl;

    return 0;
}

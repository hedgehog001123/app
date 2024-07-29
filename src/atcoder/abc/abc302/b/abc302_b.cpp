#include <bits/stdc++.h>
using namespace std;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (int i = 0; i < h; i++) cin >> s[i];

    int x, y;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            for (int k = 0; k < 8; k++) {
                string str = "";
                for (int l = 0; l < 5; l++) {
                    x = i + l * dx[k];
                    y = j + l * dy[k];
                    if (x < 0 || x >= h || y < 0 || y >= w) break;
                    str = str + s[x][y];
                }

                if (str == "snuke") {
                    for (int l = 0; l < 5; l++) {
                        x = i + l * dx[k], y = j + l * dy[k];
                        cout << x + 1 << " " << y + 1 << endl;
                    }
                    return 0;
                }
            }
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

bool visited[1010][1010];
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (int i = 0; i < h; i++) cin >> s[i];

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) visited[i][j] = false;
    }

    int ans = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] == '.' || visited[i][j] == true) continue;
            queue<int> Q;
            if (s[i][j] == '#' && visited[i][j] == false) {
                Q.push(i * 1000 + j);
                while (!Q.empty()) {
                    int pos = Q.front();
                    Q.pop();
                    int pos_x = pos / 1000;
                    int pos_y = pos % 1000;
                    for (int i = 0; i < 8; i++) {
                        int nx = pos_x + dx[i];
                        int ny = pos_y + dy[i];
                        if (0 <= nx && nx < h && 0 <= ny && ny < w && s[nx][ny] == '#' && visited[nx][ny] == false) {
                            Q.push(nx * 1000 + ny);
                            visited[nx][ny] = true;
                        }
                    }
                }
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}

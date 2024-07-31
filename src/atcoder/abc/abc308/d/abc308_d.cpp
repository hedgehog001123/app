#include <bits/stdc++.h>
using namespace std;

queue<pair<int, int>> Q;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

bool visited[510][510];
int dist[510][510];
int test_cnt_masu[510][510];

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (int i = 0; i < h; i++) cin >> s[i];
    string snuke = "snuke";
    for (int i = 0; i <= h; i++) for (int j = 0; j <= w; j++) visited[i][j] = false;
    for (int i = 0; i <= h; i++) for (int j = 0; j <= w; j++) dist[i][j] = -1;

    dist[0][0] = 0;
    if (s[0][0] == 's') Q.push(make_pair(0, 0));
    visited[0][0] = true;

    while (!Q.empty()) {
        int x = Q.front().first;
        int y = Q.front().second;
        Q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
            if (visited[nx][ny] == true) continue;
            if (s[nx][ny] != snuke[(dist[x][y]+1)%5]) continue;

            visited[nx][ny] = true;
            Q.push(make_pair(nx, ny));
            dist[nx][ny] = dist[x][y] + 1;
        }
    }

    if (visited[h-1][w-1]) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}

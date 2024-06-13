#include <bits/stdc++.h>
using namespace std;

int H, W, sy, sx, gy, gx;
int start, goal;
char  c[55][55];
int dist[2509];
vector<int> G[2509];
queue<int> Q;

int main() {
    cin >> H >> W >> sx >> sy >> gx >> gy;
    start = sx * W + sy;
    goal = gx * W + gy;
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cin >> c[i][j];
        }
    }

    // 横方向の辺をグラフに追加
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W - 1; j++) {
            int idx1 = i * W + j;
            int idx2 = i * W + (j + 1);
            if (c[i][j] == '.' && c[i][j+1] == '.') {
                G[idx1].push_back(idx2);
                G[idx2].push_back(idx1); 
            }
        }
    }

    // 縦方向の辺をグラフに追加
    for (int i = 1; i <= H-1; i++) {
        for (int j = 1; j <= W; j++) {
            int idx1 = i * W + j;
            int idx2 = (i + 1) * W + j;
            if (c[i][j] == '.' && c[i+1][j] == '.') {
                G[idx1].push_back(idx2);
                G[idx2].push_back(idx1); 
            }
        }
    }

    for (int i = 1; i <= H * W; i++) dist[i] = -1;
    Q.push(start);
    dist[start] = 0;
    while (!Q.empty()) {
        int pos = Q.front();
        Q.pop();
        for (int i = 0; i < G[pos].size(); i++) {
            int to = G[pos][i];
            if (dist[to] == -1) {
                dist[to] = dist[pos] + 1;
                Q.push(to);
            }
        }
    }

    cout << dist[goal] << endl;

    return 0;
}

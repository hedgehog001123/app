#include <bits/stdc++.h>
using namespace std;

int h, w;
bool visited[110][110];
string s[110];
int ans = 0;

void dfs(int x, int y) {
    visited[x][y] = true;
    if (visited[x+1][y] == false && s[x+1][y] == '.') {
        dfs(x+1, y);
    }
    if (visited[x][y+1] == false && s[x][y+1] == '.') {
        dfs(x, y+1);
    }
    ans = max(ans, x+y+1);
    return;
}

int main() {
    cin >> h >> w;
    for (int i = 0; i < h; i++) cin >> s[i];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) visited[i][j] = false;
    }
    dfs(0, 0);
    cout << ans << endl;

    return 0;
}

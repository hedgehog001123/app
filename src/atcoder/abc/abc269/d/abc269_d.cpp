#include <bits/stdc++.h>
using namespace std;

vector<int> G[1010];

int dx[] = {-1, -1, 0, 0, 1, 1};
int dy[] = {-1, 0, -1, 1, 0, 1};

bool seen[1010];

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        p.push_back(make_pair(x, y));
    }

    queue<int> q;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (seen[i] == true) continue;
        q.push(i);
        seen[i] = true;

        while (!q.empty()) {
            int a = p[q.front()].first, b = p[q.front()].second;
            q.pop();

            for (int j = 0; j < n; j++) {
                if (seen[j] == true) continue;
                for (int k = 0; k < 6; k++) {
                    if (p[j].first == a + dx[k] && p[j].second == b + dy[k]) {
                        q.push(j);
                        seen[j] = true;
                    }
                }
            }
        }
        ans++;
    }

    cout << ans << endl;

    return 0;
}

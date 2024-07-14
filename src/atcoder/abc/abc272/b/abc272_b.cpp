#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> ok(n, vector<bool>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n ; j++) ok[i][j] = false;
    }

    vector<vector<int>> x(m);
    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int y;
            cin >> y;
            y--;
            x[i].push_back(y);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < (int)x[i].size(); j++) {
            for (int k = 0; k < (int)x[i].size(); k++) {
                ok[x[i][j]][x[i][k]] = true;
            }
        }
    }

    bool isok = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (ok[i][j] == false) isok = false;
        }
    }

    if (isok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

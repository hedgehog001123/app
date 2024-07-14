#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> c(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        c[a].push_back(b);
        c[b].push_back(a);
    }

    for (int i = 0; i < n; i++) {
        int k = (int)c[i].size();
        cout << k << " ";
        sort(c[i].begin(), c[i].end());
        for (int j = 0; j < k; j++) {
            cout << c[i][j]+1;
            if (j != k-1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}

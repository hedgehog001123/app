#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> c(n), r(n);
    vector<int> idx;
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        if (c[i] == t) idx.push_back(i);
    }
    for (int i = 0; i < n; i++) cin >> r[i];

    if (idx.size() > 0) {
        int ma = -1;
        for (int i = 0; i < idx.size(); i++) {
            ma = max(ma, r[idx[i]]);
        }
        for (int i = 0; i < idx.size(); i++) {
            if (r[idx[i]] == ma) cout << idx[i] + 1 << endl;
        }
    }
    else {
        int ma = -1;
        int col = c[0];
        vector<int> tmp;
        for (int i = 0; i < n; i++) {
            if (col == c[i]) {
                tmp.push_back(i);
                ma = max(ma, r[i]);
            }
        }
        for (int i = 0; i < tmp.size(); i++) {
            if (r[tmp[i]] == ma) cout << tmp[i] + 1 << endl;
        }
    }

    return 0;
}

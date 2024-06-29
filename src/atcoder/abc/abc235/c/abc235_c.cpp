#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    map<int, vector<int>> M;
    for (int i = 0; i < n; i++) {
        M[a[i]].push_back(i+1);
    }
    for (int i = 0; i < q; i++) {
        int x, k;
        cin >> x >> k;
        k--;
        if ((int)M[x].size() < k+1) cout << -1 << endl;
        else cout << M[x][k] << endl;
    }

    return 0;
}

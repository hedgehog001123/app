#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> l(n);
    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> l[i];
        for (int j = 0; j < l[i]; j++) {
            int tmp;
            cin >> tmp;
            a[i].push_back(tmp);
        }
    }
    for (int i = 0; i < q; i++) {
        int s, t;
        cin >> s >> t;
        cout << a[s-1][t-1] << endl;
    }

    return 0;
}

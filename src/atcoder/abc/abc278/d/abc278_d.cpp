#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int Q;
    cin >> Q;
    vector<int> idx(n);
    for (int i = 0; i < n; i++) idx[i] = i;

    int kijyun = 0;

    for (int cnt = 0; cnt < Q; cnt++) {
        int q;
        cin >> q;
        if (q == 1) {
            int x;
            cin >> x;

            for (int i = idx.size()-1; i >= 0; i--) {
                a[idx[i]] = 0;
                idx.pop_back();
            }
            kijyun = x;
        }
        if (q == 2) {
            int i, x;
            cin >> i >> x;

            a[i-1] += x;
            idx.push_back(i-1);
        }
        if (q == 3) {
            int i;
            cin >> i;

            cout << a[i-1] + kijyun << endl;
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    vector<pair<long double, int>> p; // 1/成功率, index
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];

    for (int i = 0; i < n; i++) {
        p.push_back(make_pair((long double)(a[i]+b[i])/(long double)a[i], i+1));
    }

    sort(p.begin(), p.end());

    for (int i = 0; i < n; i++) {
        cout << p[i].second;
        if (i != n-1) cout << " ";
    }
    cout << endl;

    return 0;
}
